	THUMB_FUNC_START sub_08128520
sub_08128520: @ 0x08128520
	push {lr}
	ldr r2, _08128544  @ =gRam
	ldr r1, _08128548  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08128550
	ldr r1, _0812854C  @ =0x00001AE3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128550
	bl sub_08129D90
	b _081285A6
	.byte 0x00
	.byte 0x00
_08128544:
	.4byte gRam
_08128548:
	.4byte 0x00000547
_0812854C:
	.4byte 0x00001AE3
_08128550:
	ldr r1, _08128574  @ =gRam
	ldr r2, _08128578  @ =0x00000547
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #5
	and r0, r0, r2
	cmp r0, #0
	bne _08128594
	mov r0, #10
	and r0, r0, r2
	cmp r0, #0
	bne _0812857C
	bl sub_08128634
	bl sub_08129258
	b _081285A6
	.byte 0x00
	.byte 0x00
_08128574:
	.4byte gRam
_08128578:
	.4byte 0x00000547
_0812857C:
	ldr r0, _08128590  @ =0x00001AE2
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl sub_081285D4
	bl sub_08129258
	b _081285A6
_08128590:
	.4byte 0x00001AE2
_08128594:
	ldr r2, _081285C8  @ =0x00001AE2
	add r1, r1, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08128634
	bl sub_08129258
_081285A6:
	ldr r0, _081285CC  @ =gRam
	ldr r2, _081285D0  @ =0x00001AE3
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _081285C0
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _081285C0
	bl sub_08128634
_081285C0:
	mov r0, #0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081285C8:
	.4byte 0x00001AE2
_081285CC:
	.4byte gRam
_081285D0:
	.4byte 0x00001AE3
	THUMB_FUNC_END sub_08128520

