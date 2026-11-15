	THUMB_FUNC_START sub_08073644
sub_08073644: @ 0x08073644
	push {r4,r5,lr}
	ldr r4, _080736F8  @ =gRam
	ldr r1, _080736FC  @ =0x00000CF8
	add r0, r4, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _08073700  @ =0x00000CFA
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0812FE54
	mov r2, #12
	ldr r3, _08073704  @ =0x0000165C
	add r1, r4, r3
	ldrh r0, [r1]
	cmp r0, #0
	beq _08073670
	ldr r1, _08073708  @ =gMoonPearl
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _0807368E
_08073670:
	mov r2, #14
	ldr r1, _0807370C  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #63
	bhi _0807368E
	mov r2, #7
	cmp r0, #24
	bne _0807368E
	ldr r3, _08073710  @ =0x0000165E
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #2
	bhi _0807368E
	mov r2, #8
_0807368E:
	ldr r0, _080736F8  @ =gRam
	ldr r3, _08073714  @ =0x00000A3C
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0807370C  @ =0x000009C6
	add r1, r0, r2
	ldrh r1, [r1]
	add r5, r0, #0
	cmp r1, #64
	beq _080736B6
	cmp r1, #67
	beq _080736AE
	cmp r1, #69
	beq _080736AE
	cmp r1, #71
	bne _080736C8
_080736AE:
	ldr r3, _08073718  @ =0x00000A3E
	add r1, r5, r3
	mov r0, #6
	strb r0, [r1]
_080736B6:
	mov r2, #15
	ldr r0, _08073708  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _080736C2
	mov r2, #12
_080736C2:
	ldr r1, _08073714  @ =0x00000A3C
	add r0, r5, r1
	strh r2, [r0]
_080736C8:
	ldr r2, _0807371C  @ =0x000009AD
	add r3, r5, r2
	ldrb r4, [r3]
	ldr r1, _08073720  @ =0x00000A1A
	add r0, r5, r1
	mov r2, #0
	mov r1, #0
	strh r4, [r0]
	strb r2, [r3]
	ldr r2, _08073724  @ =0x000009E8
	add r0, r5, r2
	strh r1, [r0]
	ldr r3, _08073728  @ =0x00000A4C
	add r0, r5, r3
	strh r1, [r0]
	mov r2, #201
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	bl sub_080BE9C8
	pop {r4,r5}
	pop {r0}
	bx r0
_080736F8:
	.4byte gRam
_080736FC:
	.4byte 0x00000CF8
_08073700:
	.4byte 0x00000CFA
_08073704:
	.4byte 0x0000165C
_08073708:
	.4byte gMoonPearl
_0807370C:
	.4byte 0x000009C6
_08073710:
	.4byte 0x0000165E
_08073714:
	.4byte 0x00000A3C
_08073718:
	.4byte 0x00000A3E
_0807371C:
	.4byte 0x000009AD
_08073720:
	.4byte 0x00000A1A
_08073724:
	.4byte 0x000009E8
_08073728:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_08073644

