	THUMB_FUNC_START sub_080BA540
sub_080BA540: @ 0x080BA540
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r6, #0
	ldr r1, _080BA5A0  @ =gRam
	ldr r2, _080BA5A4  @ =0x00000A02
	add r0, r1, r2
	ldrb r5, [r0]
	ldr r3, _080BA5A8  @ =0x00000A03
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r5, r5, r0
	ldr r0, _080BA5AC  @ =0x0000016F
	cmp r5, r0
	bls _080BA5EC
	mov r6, #4
_080BA568:
	lsl r4, r6, #24
	lsr r0, r4, #24
	mov r1, #62
	mov r2, #1
	bl sub_080BD874
	mov r0, #128
	lsl r0, r0, #17
	add r4, r4, r0
	lsr r6, r4, #24
	asr r4, r4, #24
	cmp r4, #6
	bne _080BA568
	mov r6, #0
	ldr r2, _080BA5A0  @ =gRam
	ldr r1, _080BA5B0  @ =0x00001122
	add r0, r2, r1
	mov r1, #57
	strb r1, [r0]
	ldr r0, _080BA5B4  @ =0x000001BF
	cmp r5, r0
	bhi _080BA5BC
	ldr r3, _080BA5B8  @ =0x00000F92
	add r1, r2, r3
	mov r0, #2
	strb r0, [r1]
	b _080BA5D8
	.byte 0x00
	.byte 0x00
_080BA5A0:
	.4byte gRam
_080BA5A4:
	.4byte 0x00000A02
_080BA5A8:
	.4byte 0x00000A03
_080BA5AC:
	.4byte 0x0000016F
_080BA5B0:
	.4byte 0x00001122
_080BA5B4:
	.4byte 0x000001BF
_080BA5B8:
	.4byte 0x00000F92
_080BA5BC:
	ldr r0, _080BA5E4  @ =0x00000FC2
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080BA5D8
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080BA5E8  @ =0x00000F92
	add r2, r2, r1
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	and r0, r0, r1
	strb r0, [r2]
_080BA5D8:
	add r0, r6, #0
	mov r1, #6
	mov r2, #4
	bl sub_080BD874
	b _080BA6A2
_080BA5E4:
	.4byte 0x00000FC2
_080BA5E8:
	.4byte 0x00000F92
_080BA5EC:
	add r2, r1, #0
	ldr r3, _080BA6B4  @ =0x000009AC
	add r3, r3, r2
	mov r10, r3
	ldr r0, _080BA6B8  @ =0x000009AD
	add r0, r0, r2
	mov r9, r0
_080BA5FA:
	lsl r6, r6, #24
	asr r7, r6, #24
	ldr r1, _080BA6BC  @ =0x00000FF2
	add r0, r2, r1
	add r0, r7, r0
	mov r1, #26
	strb r1, [r0]
	ldr r3, _080BA6C0  @ =0x00001122
	add r0, r2, r3
	add r0, r7, r0
	mov r1, #57
	strb r1, [r0]
	lsr r4, r6, #24
	mov r1, #2
	ldr r3, _080BA6C4  @ =0x00001012
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080BA6C8  @ =0x00001032
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	mov r3, r10
	ldrb r3, [r3]
	mov r8, r3
	ldr r1, _080BA6CC  @ =0x000015DC
	add r0, r2, r1
	strb r4, [r0]
	mov r0, #12
	str r2, [sp]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r3, r9
	ldrb r5, [r3]
	mov r0, #0
	strb r0, [r3]
	ldr r2, [sp]
	ldr r1, _080BA6D0  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	add r0, r4, #0
	str r2, [sp]
	bl SpriteActive_MainLong
	mov r3, r9
	strb r5, [r3]
	mov r1, r8
	mov r0, r10
	strb r1, [r0]
	ldr r2, [sp]
	ldr r3, _080BA6D4  @ =0x00000F72
	add r0, r2, r3
	add r0, r7, r0
	ldrb r1, [r0]
	cmp r1, #15
	bne _080BA68A
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #4
	bne _080BA68A
	add r0, r7, #2
	ldr r3, _080BA6D8  @ =gUnknown_030031F2
	add r0, r0, r3
	strb r1, [r0]
_080BA68A:
	lsr r0, r6, #24
	str r2, [sp]
	bl sub_080BD8C8
	mov r1, #128
	lsl r1, r1, #17
	add r0, r6, r1
	lsr r6, r0, #24
	asr r0, r0, #24
	ldr r2, [sp]
	cmp r0, #2
	bne _080BA5FA
_080BA6A2:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BA6B4:
	.4byte 0x000009AC
_080BA6B8:
	.4byte 0x000009AD
_080BA6BC:
	.4byte 0x00000FF2
_080BA6C0:
	.4byte 0x00001122
_080BA6C4:
	.4byte 0x00001012
_080BA6C8:
	.4byte 0x00001032
_080BA6CC:
	.4byte 0x000015DC
_080BA6D0:
	.4byte 0x00000FA2
_080BA6D4:
	.4byte 0x00000F72
_080BA6D8:
	.4byte gUnknown_030031F2
	THUMB_FUNC_END sub_080BA540

