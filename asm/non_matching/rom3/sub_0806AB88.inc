	THUMB_FUNC_START sub_0806AB88
sub_0806AB88: @ 0x0806AB88
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	bl sub_08078840
	ldr r0, _0806ACAC  @ =gRam
	ldr r1, _0806ACB0  @ =0x00000AB2
	add r0, r0, r1
	ldrb r6, [r0]
	cmp r6, #255
	beq _0806ABAC
	cmp r6, #2
	bne _0806ABA4
	mov r6, #0
_0806ABA4:
	lsr r0, r6, #1
	ldr r2, _0806ACB4  @ =gUnknown_0200235C
	add r0, r0, r2
	ldrb r6, [r0]
_0806ABAC:
	add r0, r6, #0
	bl sub_080AA7E8
	ldr r7, _0806ACAC  @ =gRam
	ldr r4, _0806ACB8  @ =0x00001715
	add r1, r7, r4
	mov r0, #0
	mov r8, r0
	mov r0, #4
	strb r0, [r1]
	ldr r2, _0806ACBC  @ =0x00001716
	add r1, r7, r2
	mov r0, #3
	strb r0, [r1]
	sub r4, r4, #21
	add r1, r7, r4
	mov r0, #12
	strb r0, [r1]
	ldr r0, _0806ACC0  @ =0x00001712
	add r1, r7, r0
	mov r0, #16
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r6, r7, r1
	ldr r2, _0806ACC4  @ =0x00000958
	add r0, r7, r2
	ldrh r3, [r6]
	ldrh r2, [r0]
	sub r2, r3, r2
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r7
	mov r12, r4
	mov r5, #0
	add r1, r1, #209
	add r0, r7, r1
	strb r5, [r0]
	ldr r4, _0806ACC8  @ =0x00001792
	add r0, r7, r4
	strb r5, [r0]
	add r1, r1, #3
	add r0, r7, r1
	strb r5, [r0]
	ldr r4, _0806ACCC  @ =0x000009DA
	add r0, r7, r4
	ldrh r1, [r0]
	add r4, r4, #2
	add r0, r7, r4
	strh r1, [r0]
	add r2, r2, #16
	mov r0, r12
	strh r2, [r0]
	ldr r1, _0806ACD0  @ =0x00001708
	add r0, r7, r1
	strh r3, [r0]
	sub r3, r3, r2
	strh r3, [r6]
	ldr r2, _0806ACD4  @ =0x000009E8
	add r4, r7, r2
	ldrb r6, [r4]
	ldr r1, _0806ACD8  @ =0x00000B02
	add r0, r7, r1
	mov r2, r8
	strh r2, [r0]
	sub r1, r1, #2
	add r0, r7, r1
	strh r2, [r0]
	bl sub_08079204
	bl sub_08092874
	ldr r1, _0806ACDC  @ =gUnknown_0814CE1C
	ldr r2, _0806ACE0  @ =0x00000C99
	add r0, r7, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0812FCDC
	bl sub_080836B8
	add r0, r6, #1
	strh r0, [r4]
	ldr r4, _0806ACE4  @ =0x00000C9C
	add r1, r7, r4
	mov r4, #10
	mov r0, #10
	strh r0, [r1]
	bl sub_0812E8DC
	ldr r1, _0806ACE8  @ =0x00000CA9
	add r0, r7, r1
	strb r4, [r0]
	bl sub_080794F8
	bl sub_08077DC4
	bl sub_0808AB34
	ldr r2, _0806ACEC  @ =0x000016E8
	add r0, r7, r2
	strb r5, [r0]
	ldr r4, _0806ACF0  @ =0x000016EA
	add r0, r7, r4
	strb r5, [r0]
	bl sub_08070B60
	ldr r1, _0806ACF4  @ =0x0000176C
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806AC92
	bl sub_08133678
_0806AC92:
	bl sub_080AA6D8
	bl sub_0807094C
	ldr r2, _0806ACF8  @ =0x000009AD
	add r1, r7, r2
	mov r0, #7
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0806ACAC:
	.4byte gRam
_0806ACB0:
	.4byte 0x00000AB2
_0806ACB4:
	.4byte gUnknown_0200235C
_0806ACB8:
	.4byte 0x00001715
_0806ACBC:
	.4byte 0x00001716
_0806ACC0:
	.4byte 0x00001712
_0806ACC4:
	.4byte 0x00000958
_0806ACC8:
	.4byte 0x00001792
_0806ACCC:
	.4byte 0x000009DA
_0806ACD0:
	.4byte 0x00001708
_0806ACD4:
	.4byte 0x000009E8
_0806ACD8:
	.4byte 0x00000B02
_0806ACDC:
	.4byte gUnknown_0814CE1C
_0806ACE0:
	.4byte 0x00000C99
_0806ACE4:
	.4byte 0x00000C9C
_0806ACE8:
	.4byte 0x00000CA9
_0806ACEC:
	.4byte 0x000016E8
_0806ACF0:
	.4byte 0x000016EA
_0806ACF4:
	.4byte 0x0000176C
_0806ACF8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806AB88

