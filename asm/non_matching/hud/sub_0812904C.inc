	THUMB_FUNC_START sub_0812904C
sub_0812904C: @ 0x0812904C
	push {lr}
	bl sub_08129578
	cmp r0, #0
	beq _08129096
	ldr r3, _0812909C  @ =gRam
	ldr r1, _081290A0  @ =0x00000547
	add r0, r3, r1
	ldrb r0, [r0]
	mov r1, #207
	and r1, r1, r0
	ldr r2, _081290A4  @ =0x00000546
	add r0, r3, r2
	ldrb r2, [r0]
	mov r0, #192
	and r0, r0, r2
	orr r1, r1, r0
	cmp r1, #0
	beq _08129096
	ldr r0, _081290A8  @ =0x00001AD2
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _081290AC  @ =0x00001AE3
	add r1, r3, r2
	mov r0, #16
	strb r0, [r1]
	ldr r1, _081290B0  @ =0x00001B05
	add r0, r3, r1
	ldrb r1, [r0]
	sub r2, r2, #22
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
_08129096:
	mov r0, #0
	pop {r1}
	bx r1
_0812909C:
	.4byte gRam
_081290A0:
	.4byte 0x00000547
_081290A4:
	.4byte 0x00000546
_081290A8:
	.4byte 0x00001AD2
_081290AC:
	.4byte 0x00001AE3
_081290B0:
	.4byte 0x00001B05
	THUMB_FUNC_END sub_0812904C

