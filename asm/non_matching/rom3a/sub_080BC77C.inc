	THUMB_FUNC_START sub_080BC77C
sub_080BC77C: @ 0x080BC77C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r4, _080BC824  @ =gRam
	ldr r0, _080BC828  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	mov r10, r1
	ldr r2, _080BC82C  @ =0x000016C4
	add r1, r4, r2
	ldrh r3, [r1]
	str r3, [sp]
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldrh r3, [r2]
	str r3, [sp, #4]
	mov r3, #0
	mov r0, #200
	lsl r0, r0, #4
	strh r0, [r1]
	mov r0, #192
	lsl r0, r0, #1
	strh r0, [r2]
	strb r3, [r5]
	bl sub_080CE350
	mov r0, r10
	strb r0, [r5]
	mov r6, #15
	mov r9, r4
_080BC7C0:
	ldr r0, _080BC830  @ =0x00000FF2
	add r0, r0, r9
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	mov r2, r9
	cmp r0, #0
	beq _080BC884
	ldr r1, _080BC834  @ =0x000015DC
	add r0, r2, r1
	mov r7, #0
	strb r6, [r0]
	ldr r3, _080BC828  @ =0x000009AD
	add r0, r2, r3
	strb r7, [r0]
	ldr r1, _080BC838  @ =0x00001012
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	str r2, [sp, #8]
	bl sub_080CF370
	lsl r0, r6, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C1F70
	ldr r2, [sp, #8]
	ldr r3, _080BC83C  @ =0x00000FD2
	add r0, r2, r3
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080BC810
	sub r0, r0, #1
	strb r0, [r4]
_080BC810:
	ldr r0, _080BC840  @ =gUnknown_030031D2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #9
	bne _080BC844
	add r0, r5, #0
	bl SpriteActive_MainLong
	b _080BC856
	.byte 0x00
	.byte 0x00
_080BC824:
	.4byte gRam
_080BC828:
	.4byte 0x000009AD
_080BC82C:
	.4byte 0x000016C4
_080BC830:
	.4byte 0x00000FF2
_080BC834:
	.4byte 0x000015DC
_080BC838:
	.4byte 0x00001012
_080BC83C:
	.4byte 0x00000FD2
_080BC840:
	.4byte gUnknown_030031D2
_080BC844:
	cmp r0, #6
	bne _080BC850
	add r0, r5, #0
	bl sub_080C6DC8
	b _080BC856
_080BC850:
	strb r7, [r1]
	mov r1, r8
	strb r7, [r1]
_080BC856:
	ldr r0, _080BC914  @ =gRam
	ldr r2, _080BC918  @ =0x00000FF2
	add r1, r0, r2
	add r1, r6, r1
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #140
	bne _080BC884
	ldr r3, _080BC91C  @ =0x00000F52
	add r0, r2, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #5
	beq _080BC884
	ldr r1, _080BC920  @ =0x00000F22
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	sub r3, r3, #64
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
_080BC884:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC7C0
	ldr r1, _080BC924  @ =0x00000A02
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _080BC928  @ =0x00000A03
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #200
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BC8DA
	mov r6, #15
	add r4, r2, #0
	ldr r0, _080BC92C  @ =0x00001022
	add r5, r2, r0
_080BC8AA:
	ldr r1, _080BC918  @ =0x00000FF2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #141
	bne _080BC8D4
	ldr r3, _080BC930  @ =0x00000FA2
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080BC8D4
	add r1, r6, r5
	mov r0, #0
	strb r0, [r1]
	lsl r0, r6, #24
	lsr r0, r0, #24
	str r2, [sp, #8]
	bl sub_080C2160
	ldr r2, [sp, #8]
_080BC8D4:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC8AA
_080BC8DA:
	ldr r0, _080BC934  @ =0x000009AD
	add r4, r2, r0
	mov r0, #0
	strb r0, [r4]
	str r2, [sp, #8]
	bl sub_080CE324
	ldr r2, [sp, #8]
	ldr r1, _080BC938  @ =0x000016C4
	add r0, r2, r1
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r0]
	sub r1, r1, #4
	add r0, r2, r1
	mov r2, sp
	ldrh r2, [r2, #4]
	strh r2, [r0]
	mov r3, r10
	strb r3, [r4]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BC914:
	.4byte gRam
_080BC918:
	.4byte 0x00000FF2
_080BC91C:
	.4byte 0x00000F52
_080BC920:
	.4byte 0x00000F22
_080BC924:
	.4byte 0x00000A02
_080BC928:
	.4byte 0x00000A03
_080BC92C:
	.4byte 0x00001022
_080BC930:
	.4byte 0x00000FA2
_080BC934:
	.4byte 0x000009AD
_080BC938:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080BC77C

