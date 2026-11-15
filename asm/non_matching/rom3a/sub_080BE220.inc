	THUMB_FUNC_START sub_080BE220
sub_080BE220: @ 0x080BE220
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r0, _080BE248  @ =gRam
	ldr r1, _080BE24C  @ =0x0000098F
	add r5, r0, r1
	ldrb r1, [r5]
	add r4, r0, #0
	cmp r1, #0
	bne _080BE258
	ldr r1, _080BE250  @ =gUnknown_03003E48
	mov r0, #2
	bl sub_080679CC
	lsl r0, r0, #16
	cmp r0, #0
	beq _080BE254
	bl sub_080698FC
	b _080BE4FC
_080BE248:
	.4byte gRam
_080BE24C:
	.4byte 0x0000098F
_080BE250:
	.4byte gUnknown_03003E48
_080BE254:
	mov r0, #1
	strb r0, [r5]
_080BE258:
	ldr r3, _080BE508  @ =0x000009B2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080BE26A
	bl sub_08070064
_080BE26A:
	ldr r5, _080BE50C  @ =0x00000AB2
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #255
	beq _080BE286
	cmp r0, #2
	bne _080BE27A
	mov r0, #0
_080BE27A:
	lsr r0, r0, #1
	ldr r1, _080BE510  @ =gUnknown_0200235C
	add r0, r0, r1
	sub r1, r1, #13
	ldrb r1, [r1]
	strb r1, [r0]
_080BE286:
	mov r0, #28
	mov r1, #1
	bl sub_080BEA28
	bl sub_080BEADC
	ldr r1, _080BE514  @ =gUnknown_0200247F
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080BE518  @ =gUnknown_0200236A
	ldr r2, _080BE51C  @ =gRam
	ldr r3, _080BE520  @ =0x0000165A
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r5, _080BE524  @ =0x0000165C
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r0, _080BE528  @ =0x0000165E
	add r3, r2, r0
	ldr r1, _080BE52C  @ =0x00001661
	add r4, r2, r1
	ldrb r1, [r3]
	ldrb r0, [r4]
	orr r0, r0, r1
	cmp r0, #0
	bne _080BE2CE
	mov r0, #1
	strb r0, [r3]
	mov r1, #7
	strb r1, [r4]
	add r5, r5, #80
	add r1, r2, r5
	strh r0, [r1]
_080BE2CE:
	ldr r1, _080BE530  @ =gUnknown_0200236E
	ldrb r0, [r3]
	strb r0, [r1]
	add r1, r1, #1
	ldr r3, _080BE534  @ =0x0000165F
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	mov r5, #179
	lsl r5, r5, #5
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldrb r0, [r4]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #3
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #3
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #2
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #3
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #3
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #2
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #5
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #6
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #14
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #14
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r5, r5, #4
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #3
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #2
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #2
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #2
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r3, r3, #7
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r5, _080BE538  @ =0x00000B54
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	sub r3, r3, #2
	add r0, r2, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	ldr r5, _080BE53C  @ =0x000016B0
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldr r0, _080BE540  @ =gUnknown_0201094F
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldr r0, _080BE544  @ =gUnknown_0201095F
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldr r0, _080BE548  @ =gUnknown_0201096F
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	ldr r0, _080BE54C  @ =gUnknown_0201097F
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #5
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #2
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #2
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r5, r5, #2
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
	add r1, r1, #1
	add r3, r3, #2
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r5, _080BE550  @ =0x04000208
	mov r8, r5
	mov r0, #0
	strh r0, [r5]
	ldr r6, _080BE554  @ =0x04000200
	ldrh r5, [r6]
	strh r0, [r6]
	ldr r1, _080BE558  @ =0x040000DC
	mov r0, #0
	str r0, [r1]
	bl sub_0812A90C
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	ldr r1, _080BE55C  @ =gUnknown_02002000
	bl sub_080679F0
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_0812A958
	strh r5, [r6]
	mov r0, #1
	mov r1, r8
	strh r0, [r1]
	cmp r4, #0
	bne _080BE4FC
	bl sub_0806992C
_080BE4FC:
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BE508:
	.4byte 0x000009B2
_080BE50C:
	.4byte 0x00000AB2
_080BE510:
	.4byte gUnknown_0200235C
_080BE514:
	.4byte gUnknown_0200247F
_080BE518:
	.4byte gUnknown_0200236A
_080BE51C:
	.4byte gRam
_080BE520:
	.4byte 0x0000165A
_080BE524:
	.4byte 0x0000165C
_080BE528:
	.4byte 0x0000165E
_080BE52C:
	.4byte 0x00001661
_080BE530:
	.4byte gUnknown_0200236E
_080BE534:
	.4byte 0x0000165F
_080BE538:
	.4byte 0x00000B54
_080BE53C:
	.4byte 0x000016B0
_080BE540:
	.4byte gUnknown_0201094F
_080BE544:
	.4byte gUnknown_0201095F
_080BE548:
	.4byte gUnknown_0201096F
_080BE54C:
	.4byte gUnknown_0201097F
_080BE550:
	.4byte 0x04000208
_080BE554:
	.4byte 0x04000200
_080BE558:
	.4byte 0x040000DC
_080BE55C:
	.4byte gUnknown_02002000
	THUMB_FUNC_END sub_080BE220

