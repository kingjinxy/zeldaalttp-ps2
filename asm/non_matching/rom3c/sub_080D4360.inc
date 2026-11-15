	THUMB_FUNC_START sub_080D4360
sub_080D4360: @ 0x080D4360
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080D4394  @ =gRam
	ldr r1, _080D4398  @ =0x00000FD2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D43E8
	sub r1, r1, #176
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D43A0
	ldr r1, _080D439C  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
	strb r1, [r0]
	b _080D43B2
_080D4394:
	.4byte gRam
_080D4398:
	.4byte 0x00000FD2
_080D439C:
	.4byte 0x00001122
_080D43A0:
	ldr r0, _080D43F0  @ =0x00001122
	add r2, r2, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2]
_080D43B2:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D43E8
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080D43F4  @ =gUnknown_08174FAC
	ldr r0, _080D43F8  @ =gRam
	ldr r2, _080D43FC  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D43E8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D43F0:
	.4byte 0x00001122
_080D43F4:
	.4byte gUnknown_08174FAC
_080D43F8:
	.4byte gRam
_080D43FC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D4360

