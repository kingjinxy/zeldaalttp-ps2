	THUMB_FUNC_START sub_0810AD90
sub_0810AD90: @ 0x0810AD90
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0810ADB0  @ =gRam
	ldr r1, _0810ADB4  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810ADB8
	add r0, r4, #0
	bl sub_0810AC70
	b _0810ADCA
	.byte 0x00
	.byte 0x00
_0810ADB0:
	.4byte gRam
_0810ADB4:
	.4byte 0x00000F52
_0810ADB8:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810AE04
_0810ADCA:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810AE04
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810AE04
	ldr r2, _0810AE0C  @ =gRam
	ldr r1, _0810AE10  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _0810AE14  @ =gUnknown_0817C8A4
	ldr r0, _0810AE18  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_0810AE04:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0810AE0C:
	.4byte gRam
_0810AE10:
	.4byte 0x00001172
_0810AE14:
	.4byte gUnknown_0817C8A4
_0810AE18:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810AD90

