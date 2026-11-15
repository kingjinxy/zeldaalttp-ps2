	THUMB_FUNC_START sub_080AD7D8
sub_080AD7D8: @ 0x080AD7D8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	beq _080AD7F4
	b _080AD974
_080AD7F4:
	ldr r1, _080AD80C  @ =gBombs
	ldrb r0, [r1]
	cmp r0, #0
	bne _080AD818
	ldr r0, _080AD810  @ =gRam
	mov r1, sp
	ldr r2, _080AD814  @ =0x00000E15
	add r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	b _080AD974
_080AD80C:
	.4byte gBombs
_080AD810:
	.4byte gRam
_080AD814:
	.4byte 0x00000E15
_080AD818:
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080AD826
	bl sub_080AA724
_080AD826:
	ldr r4, _080AD8F4  @ =gRam
	mov r1, sp
	mov r3, #196
	lsl r3, r3, #5
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r2, _080AD8F8  @ =0x00000E1F
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r3, _080AD8FC  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r2, _080AD900  @ =0x00001855
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r3, _080AD904  @ =0x00001818
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	sub r2, r2, #35
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r1, _080AD908  @ =gUnknown_0817F593
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, sp
	add r3, r3, #59
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r1, sp
	ldr r2, _080AD90C  @ =0x00000A92
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	ldr r3, _080AD910  @ =0x00000E33
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #8
	strb r1, [r0]
	mov r0, sp
	ldr r2, _080AD914  @ =0x00000E3D
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r3, _080AD918  @ =0x000016D5
	add r2, r4, r3
	ldrb r0, [r2]
	lsr r0, r0, #1
	strb r0, [r1]
	mov r1, sp
	ldr r3, _080AD91C  @ =0x0000186B
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	ldrb r0, [r2]
	lsr r5, r0, #1
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080AD98C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AD92C
	mov r0, #182
	lsl r0, r0, #5
	add r1, r4, r0
	ldr r0, _080AD920  @ =gUnknown_0816E55C
	lsl r2, r5, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	ldr r0, _080AD924  @ =0x000016C4
	add r1, r4, r0
	ldr r0, _080AD928  @ =gUnknown_0816E564
	b _080AD94C
	.byte 0x00
	.byte 0x00
_080AD8F4:
	.4byte gRam
_080AD8F8:
	.4byte 0x00000E1F
_080AD8FC:
	.4byte 0x00000E29
_080AD900:
	.4byte 0x00001855
_080AD904:
	.4byte 0x00001818
_080AD908:
	.4byte gUnknown_0817F593
_080AD90C:
	.4byte 0x00000A92
_080AD910:
	.4byte 0x00000E33
_080AD914:
	.4byte 0x00000E3D
_080AD918:
	.4byte 0x000016D5
_080AD91C:
	.4byte 0x0000186B
_080AD920:
	.4byte gUnknown_0816E55C
_080AD924:
	.4byte 0x000016C4
_080AD928:
	.4byte gUnknown_0816E564
_080AD92C:
	mov r3, #182
	lsl r3, r3, #5
	add r1, r4, r3
	ldr r0, _080AD97C  @ =gUnknown_0816E54C
	lsl r2, r5, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	ldr r0, _080AD980  @ =0x000016C4
	add r1, r4, r0
	ldr r0, _080AD984  @ =gUnknown_0816E554
_080AD94C:
	add r2, r2, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _080AD988  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, #3
	mov r1, #1
	bl sub_080BEA28
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #30
	bl sub_080C19F8
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AD974:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080AD97C:
	.4byte gUnknown_0816E54C
_080AD980:
	.4byte 0x000016C4
_080AD984:
	.4byte gUnknown_0816E554
_080AD988:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AD7D8

