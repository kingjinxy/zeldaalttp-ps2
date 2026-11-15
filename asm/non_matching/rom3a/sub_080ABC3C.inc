	THUMB_FUNC_START sub_080ABC3C
sub_080ABC3C: @ 0x080ABC3C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080ABCCA
	ldr r3, _080ABCD4  @ =gRam
	mov r1, sp
	ldr r2, _080ABCD8  @ =0x00000E29
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #5
	strb r1, [r0]
	mov r1, sp
	ldr r4, _080ABCDC  @ =0x00001844
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r5, [r0]
	ldr r2, _080ABCE0  @ =0x000016C1
	add r0, r3, r2
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #8
	ldr r1, _080ABCE4  @ =gUnknown_0816E0AC
	ldr r4, _080ABCE8  @ =0x000016D5
	add r0, r3, r4
	ldrb r4, [r0]
	lsr r4, r4, #1
	add r1, r4, r1
	mov r0, #0
	ldrsb r0, [r1, r0]
	orr r5, r5, r2
	add r5, r5, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strh r5, [r0]
	ldr r2, _080ABCEC  @ =0x000016C4
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080ABCF0  @ =0x000016C5
	add r0, r3, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080ABCF4  @ =gUnknown_0816E0B0
	add r4, r4, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	orr r2, r2, r1
	add r2, r2, r0
	ldr r4, _080ABCF8  @ =0x00000964
	add r3, r3, r4
	strh r2, [r3]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080ABCCA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ABCD4:
	.4byte gRam
_080ABCD8:
	.4byte 0x00000E29
_080ABCDC:
	.4byte 0x00001844
_080ABCE0:
	.4byte 0x000016C1
_080ABCE4:
	.4byte gUnknown_0816E0AC
_080ABCE8:
	.4byte 0x000016D5
_080ABCEC:
	.4byte 0x000016C4
_080ABCF0:
	.4byte 0x000016C5
_080ABCF4:
	.4byte gUnknown_0816E0B0
_080ABCF8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080ABC3C

