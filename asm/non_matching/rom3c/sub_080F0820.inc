	THUMB_FUNC_START sub_080F0820
sub_080F0820: @ 0x080F0820
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	mov r1, #41
	bl sub_080CF0AC
	mov r5, #5
	ldr r6, _080F0890  @ =gRam
	ldr r0, _080F0894  @ =0x00001052
	add r0, r0, r6
	mov r8, r0
_080F083C:
	mov r0, #16
	add r1, r7, #0
	bl sub_080CA538
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	blt _080F0880
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r0, _080F0898  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080F089C  @ =gUnknown_08178D1C
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F08A0  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080F08A4  @ =gUnknown_08178D22
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F08A8  @ =0x00001152
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	mov r0, r8
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
_080F0880:
	sub r5, r5, #1
	cmp r5, #0
	bge _080F083C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F0890:
	.4byte gRam
_080F0894:
	.4byte 0x00001052
_080F0898:
	.4byte 0x00000F22
_080F089C:
	.4byte gUnknown_08178D1C
_080F08A0:
	.4byte 0x00000F12
_080F08A4:
	.4byte gUnknown_08178D22
_080F08A8:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F0820

