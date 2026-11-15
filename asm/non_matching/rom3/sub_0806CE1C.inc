	THUMB_FUNC_START sub_0806CE1C
sub_0806CE1C: @ 0x0806CE1C
	push {r4-r7,lr}
	ldr r0, _0806CE74  @ =gRam
	mov r2, #162
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r1, [r1]
	add r7, r0, #0
	cmp r1, #0
	beq _0806CE30
	b _0806CF5C
_0806CE30:
	ldr r3, _0806CE78  @ =0x00001770
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806CE3C
	b _0806CF5C
_0806CE3C:
	ldr r1, _0806CE7C  @ =0x00001649
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806CE48
	b _0806CF5C
_0806CE48:
	ldr r2, _0806CE80  @ =0x00000B6E
	add r0, r7, r2
	ldrb r2, [r0]
	cmp r2, #0
	beq _0806CE54
	b _0806CF5C
_0806CE54:
	ldr r3, _0806CE84  @ =0x00000534
	add r0, r7, r3
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #0
	beq _0806CE90
	ldr r1, _0806CE88  @ =0x00000A4C
	add r0, r7, r1
	strh r2, [r0]
	ldr r2, _0806CE8C  @ =0x000009AD
	add r1, r7, r2
	mov r0, #1
	b _0806CEBA
_0806CE74:
	.4byte gRam
_0806CE78:
	.4byte 0x00001770
_0806CE7C:
	.4byte 0x00001649
_0806CE80:
	.4byte 0x00000B6E
_0806CE84:
	.4byte 0x00000534
_0806CE88:
	.4byte 0x00000A4C
_0806CE8C:
	.4byte 0x000009AD
_0806CE90:
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806CEDC
	ldr r1, _0806CED0  @ =0x00000AB2
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #255
	beq _0806CEDC
	ldr r2, _0806CED4  @ =0x000009DA
	add r0, r7, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806CEDC
	sub r1, r1, #102
	add r0, r7, r1
	strh r3, [r0]
	sub r2, r2, #45
	add r1, r7, r2
	mov r0, #3
_0806CEBA:
	strb r0, [r1]
	ldr r3, _0806CED8  @ =0x000009AC
	add r2, r7, r3
	ldrb r1, [r2]
	add r3, r3, #110
	add r0, r7, r3
	strh r1, [r0]
	mov r0, #14
	strb r0, [r2]
	b _0806CF60
	.byte 0x00
	.byte 0x00
_0806CED0:
	.4byte 0x00000AB2
_0806CED4:
	.4byte 0x000009DA
_0806CED8:
	.4byte 0x000009AC
_0806CEDC:
	ldr r1, _0806CF38  @ =0x00000547
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0806CF5C
	ldr r2, _0806CF3C  @ =0x0000165F
	add r0, r7, r2
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0806CF5C
	ldr r3, _0806CF40  @ =0x00001AE2
	add r0, r7, r3
	ldrb r1, [r0]
	ldr r2, _0806CF44  @ =0x00001AEE
	add r0, r7, r2
	mov r6, #0
	strb r1, [r0]
	ldr r3, _0806CF48  @ =0x000009AC
	add r4, r7, r3
	ldrb r5, [r4]
	ldr r0, _0806CF4C  @ =0x00000189
	bl sub_080AF4FC
	strb r5, [r4]
	ldr r1, _0806CF50  @ =0x000009E8
	add r0, r7, r1
	strh r6, [r0]
	ldr r2, _0806CF54  @ =0x000009AD
	add r1, r7, r2
	mov r0, #11
	strb r0, [r1]
	ldrb r1, [r4]
	ldr r3, _0806CF58  @ =0x00000A1A
	add r0, r7, r3
	strh r1, [r0]
	mov r0, #14
	strb r0, [r4]
	mov r0, #117
	mov r1, #0
	bl sub_0812A324
	b _0806CF60
_0806CF38:
	.4byte 0x00000547
_0806CF3C:
	.4byte 0x0000165F
_0806CF40:
	.4byte 0x00001AE2
_0806CF44:
	.4byte 0x00001AEE
_0806CF48:
	.4byte 0x000009AC
_0806CF4C:
	.4byte 0x00000189
_0806CF50:
	.4byte 0x000009E8
_0806CF54:
	.4byte 0x000009AD
_0806CF58:
	.4byte 0x00000A1A
_0806CF5C:
	bl sub_0809E2FC
_0806CF60:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806CE1C

	.byte 0x00
	.byte 0x00
