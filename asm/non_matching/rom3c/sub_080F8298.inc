	THUMB_FUNC_START sub_080F8298
sub_080F8298: @ 0x080F8298
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F82FC  @ =gRam
	ldr r1, _080F8300  @ =0x00000F82
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F8314
	ldr r2, _080F8304  @ =0x00000FB2
	add r0, r6, r2
	add r5, r4, r0
	ldrb r1, [r5]
	add r7, r1, #0
	add r2, r2, #32
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F82CA
	ldr r0, _080F8308  @ =gUnknown_08176908
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r5]
_080F82CA:
	add r0, r4, #0
	bl sub_080F869C
	strb r7, [r5]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F839C
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080F830C  @ =gUnknown_08179FA0
	ldr r2, _080F8310  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080F839C
_080F82FC:
	.4byte gRam
_080F8300:
	.4byte 0x00000F82
_080F8304:
	.4byte 0x00000FB2
_080F8308:
	.4byte gUnknown_08176908
_080F830C:
	.4byte gUnknown_08179FA0
_080F8310:
	.4byte 0x00000F52
_080F8314:
	ldr r1, _080F83A4  @ =0x00001651
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F832C
	ldr r2, _080F83A8  @ =0x00000D94
	add r0, r6, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_080F832C:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F839C
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F83AC  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #30
	bne _080F8356
	add r0, r4, #0
	bl sub_080CF6C0
_080F8356:
	ldrb r5, [r5]
	cmp r5, #0
	bne _080F8396
	add r0, r4, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F8396
	ldr r2, _080F83B0  @ =0x00000FA2
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _080F83B4  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	sub r2, r2, #208
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C444C
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
_080F8396:
	add r0, r4, #0
	bl sub_080C5044
_080F839C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F83A4:
	.4byte 0x00001651
_080F83A8:
	.4byte 0x00000D94
_080F83AC:
	.4byte 0x00000FC2
_080F83B0:
	.4byte 0x00000FA2
_080F83B4:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_080F8298

