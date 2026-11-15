	THUMB_FUNC_START sub_0809C7EC
sub_0809C7EC: @ 0x0809C7EC
	push {r4-r7,lr}
	ldr r1, _0809C864  @ =gRam
	ldr r2, _0809C868  @ =0x000009AD
	add r0, r1, r2
	ldrb r3, [r0]
	add r4, r1, #0
	cmp r3, #2
	bne _0809C806
	ldr r1, _0809C86C  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #14
	beq _0809C810
_0809C806:
	ldr r2, _0809C870  @ =0x00000DA7
	add r0, r4, r2
	ldrb r2, [r0]
	cmp r2, #0
	beq _0809C89C
_0809C810:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809C874  @ =0x000016EC
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _0809C878  @ =0x000016C4
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809C87C  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809C880  @ =0x000016F0
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _0809C884  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809C888  @ =0x00000964
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809C88C  @ =0x000016ED
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _0809C890  @ =0x000016C5
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809C894  @ =0x00000965
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809C898  @ =0x000016F1
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08097548
	b _0809CA00
	.byte 0x00
	.byte 0x00
_0809C864:
	.4byte gRam
_0809C868:
	.4byte 0x000009AD
_0809C86C:
	.4byte 0x000009AC
_0809C870:
	.4byte 0x00000DA7
_0809C874:
	.4byte 0x000016EC
_0809C878:
	.4byte 0x000016C4
_0809C87C:
	.4byte 0x00000961
_0809C880:
	.4byte 0x000016F0
_0809C884:
	.4byte 0x000016C1
_0809C888:
	.4byte 0x00000964
_0809C88C:
	.4byte 0x000016ED
_0809C890:
	.4byte 0x000016C5
_0809C894:
	.4byte 0x00000965
_0809C898:
	.4byte 0x000016F1
_0809C89C:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #26
	strb r0, [r1]
	ldr r1, _0809C908  @ =0x000016CD
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #90
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	mov r5, #0
	ldr r2, _0809C90C  @ =0x00001727
	add r0, r4, r2
	ldrb r2, [r0]
	mov r0, #12
	and r0, r0, r2
	cmp r0, #0
	beq _0809C8D8
	mov r1, #3
	and r1, r1, r2
	neg r0, r1
	orr r0, r0, r1
	lsr r5, r0, #31
_0809C8D8:
	add r0, r5, #0
	add r0, r0, #26
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _0809C910  @ =0x00001716
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _0809C920
	cmp r1, #3
	bne _0809C962
	ldr r2, _0809C914  @ =0x00001712
	add r3, r4, r2
	ldrb r2, [r3]
	add r0, r2, #0
	sub r0, r0, #48
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0809C918
	mov r0, #32
	strb r0, [r3]
	b _0809C962
	.byte 0x00
	.byte 0x00
_0809C908:
	.4byte 0x000016CD
_0809C90C:
	.4byte 0x00001727
_0809C910:
	.4byte 0x00001716
_0809C914:
	.4byte 0x00001712
_0809C918:
	add r0, r2, #0
	add r0, r0, #8
	strb r0, [r3]
	b _0809C962
_0809C920:
	ldr r2, _0809C954  @ =0x00001712
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809C962
	add r2, r2, #6
	add r0, r4, r2
	strb r1, [r0]
	mov r5, #10
	cmp r3, #8
	beq _0809C93C
	cmp r3, #17
	beq _0809C93C
	mov r5, #2
_0809C93C:
	ldr r0, _0809C954  @ =0x00001712
	add r2, r4, r0
	ldrb r0, [r2]
	add r1, r0, #0
	cmp r1, #1
	beq _0809C962
	cmp r1, #15
	bhi _0809C958
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #0
	b _0809C968
_0809C954:
	.4byte 0x00001712
_0809C958:
	mov r1, #0
	strb r1, [r2]
	ldr r2, _0809CA08  @ =0x00001719
	add r0, r4, r2
	strb r1, [r0]
_0809C962:
	ldr r0, _0809CA0C  @ =gUnknown_08167DEA
	add r0, r5, r0
	ldrb r1, [r0]
_0809C968:
	ldr r2, _0809CA10  @ =0x00001712
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r1, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _0809CA14  @ =0x00000974
	add r3, r4, r0
	strb r1, [r3]
	ldr r2, _0809CA18  @ =0x00000975
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0809CA1C  @ =0x00000978
	add r2, r4, r0
	mov r0, #3
	strb r0, [r2]
	ldr r0, _0809CA20  @ =0x00000979
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	mov r5, #1
	ldr r0, _0809CA24  @ =0x00001727
	add r0, r0, r4
	mov r12, r0
	add r6, r2, #0
	add r2, r1, #0
	ldr r1, _0809CA28  @ =0x000016CD
	add r7, r4, r1
_0809C9A0:
	mov r0, r12
	ldrb r1, [r0]
	mov r0, #0
	ldrsb r0, [r6, r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0809C9CA
	mov r0, #0
	ldrsb r0, [r2, r0]
	and r1, r1, r0
	cmp r1, #0
	beq _0809C9C2
	add r1, r5, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	strb r0, [r1]
_0809C9C2:
	add r0, r5, r7
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
_0809C9CA:
	ldrb r0, [r6]
	lsl r0, r0, #2
	strb r0, [r6]
	ldrb r0, [r2]
	lsl r0, r0, #2
	strb r0, [r2]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _0809C9A0
	ldr r2, _0809CA2C  @ =0x000016CF
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r0, _0809CA30  @ =0x000016C8
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	sub r2, r2, #6
	add r1, r4, r2
	strb r0, [r1]
	ldr r0, _0809CA34  @ =0x000016D2
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_0809CA00:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809CA08:
	.4byte 0x00001719
_0809CA0C:
	.4byte gUnknown_08167DEA
_0809CA10:
	.4byte 0x00001712
_0809CA14:
	.4byte 0x00000974
_0809CA18:
	.4byte 0x00000975
_0809CA1C:
	.4byte 0x00000978
_0809CA20:
	.4byte 0x00000979
_0809CA24:
	.4byte 0x00001727
_0809CA28:
	.4byte 0x000016CD
_0809CA2C:
	.4byte 0x000016CF
_0809CA30:
	.4byte 0x000016C8
_0809CA34:
	.4byte 0x000016D2
	THUMB_FUNC_END sub_0809C7EC

