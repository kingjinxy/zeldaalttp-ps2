	THUMB_FUNC_START sub_08096150
sub_08096150: @ 0x08096150
	push {lr}
	ldr r2, _08096194  @ =gRam
	ldr r1, _08096198  @ =0x0000097C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080961A4
	mov r3, #1
	ldr r1, _0809619C  @ =0x000016D7
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0809617C
	neg r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809617E
_0809617C:
	mov r3, #255
_0809617E:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r1, #0
	strb r3, [r0]
	ldr r3, _080961A0  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	bl sub_0809E6B8
	b _080961D4
_08096194:
	.4byte gRam
_08096198:
	.4byte 0x0000097C
_0809619C:
	.4byte 0x000016D7
_080961A0:
	.4byte 0x00000961
_080961A4:
	mov r3, #1
	ldr r1, _080961D8  @ =0x000016D7
	add r0, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080961C0
	neg r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	bge _080961C0
	mov r3, #255
_080961C0:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r1, #0
	strb r3, [r0]
	ldr r3, _080961DC  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	bl sub_0809E6B8
_080961D4:
	pop {r0}
	bx r0
_080961D8:
	.4byte 0x000016D7
_080961DC:
	.4byte 0x00000961
	THUMB_FUNC_END sub_08096150

