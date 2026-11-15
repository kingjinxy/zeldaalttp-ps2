	THUMB_FUNC_START sub_080FBE88
sub_080FBE88: @ 0x080FBE88
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #19
	mov r2, #13
	bl sub_080C9AAC
	add r5, r0, #0
	cmp r5, #0
	blt _080FBEFE
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	ldr r2, _080FBF04  @ =gRam
	ldr r0, _080FBF08  @ =0x00000964
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #28
	mov r3, #0
	strh r0, [r1]
	ldr r6, _080FBF0C  @ =0x00000ED2
	add r0, r2, r6
	add r0, r5, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FBF10  @ =0x00000EF2
	add r0, r2, r1
	add r0, r5, r0
	ldr r6, _080FBF14  @ =0x00000965
	add r1, r2, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FBF18  @ =0x00000FB2
	add r0, r2, r1
	add r0, r5, r0
	strb r3, [r0]
	ldr r6, _080FBF1C  @ =0x00001122
	add r0, r2, r6
	add r0, r5, r0
	mov r1, #9
	strb r1, [r0]
	ldr r0, _080FBF20  @ =0x000011B2
	add r1, r2, r0
	add r1, r5, r1
	ldrb r3, [r1]
	mov r0, #240
	and r0, r0, r3
	strb r0, [r1]
	ldr r1, _080FBF24  @ =0x00000EA5
	add r2, r2, r1
	add r2, r5, r2
	mov r0, #6
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080FB318
_080FBEFE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FBF04:
	.4byte gRam
_080FBF08:
	.4byte 0x00000964
_080FBF0C:
	.4byte 0x00000ED2
_080FBF10:
	.4byte 0x00000EF2
_080FBF14:
	.4byte 0x00000965
_080FBF18:
	.4byte 0x00000FB2
_080FBF1C:
	.4byte 0x00001122
_080FBF20:
	.4byte 0x000011B2
_080FBF24:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080FBE88

