	THUMB_FUNC_START sub_080D52FC
sub_080D52FC: @ 0x080D52FC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080D5348  @ =gRam
	ldr r1, _080D534C  @ =0x000009AC
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _080D5322
	add r1, r1, #26
	add r0, r2, r1
	ldrh r0, [r0]
	ldr r1, _080D5350  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080D535C
_080D5322:
	ldr r1, _080D5354  @ =0x00000F52
	add r0, r2, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #5
	beq _080D5334
	add r0, r5, #0
	bl sub_080D4FAC
_080D5334:
	ldr r0, _080D5358  @ =gUnknown_08174FCC
	ldrb r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r5, #0
	bl _call_via_r1
	b _080D5366
	.byte 0x00
	.byte 0x00
_080D5348:
	.4byte gRam
_080D534C:
	.4byte 0x000009AC
_080D5350:
	.4byte gUnknown_02002280
_080D5354:
	.4byte 0x00000F52
_080D5358:
	.4byte gUnknown_08174FCC
_080D535C:
	ldr r1, _080D536C  @ =0x00000FA2
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080D5366:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D536C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D52FC

