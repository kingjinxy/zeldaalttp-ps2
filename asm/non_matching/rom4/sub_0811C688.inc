	THUMB_FUNC_START sub_0811C688
sub_0811C688: @ 0x0811C688
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _0811C760  @ =gRam
	ldr r1, _0811C764  @ =0x000009AD
	add r0, r4, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _0811C758
	ldr r2, _0811C768  @ =0x00000DED
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #248
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_0811C844
	ldr r3, _0811C76C  @ =0x0000181D
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r3, r4, r7
	strb r0, [r3]
	ldr r1, _0811C770  @ =0x00001822
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _0811C774  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	ldr r7, _0811C778  @ =0x00000DC5
	add r0, r4, r7
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _0811C77C  @ =0x00000964
	add r2, r4, r1
	strb r0, [r2]
	add r7, r7, #20
	add r0, r4, r7
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r7, _0811C780  @ =0x00000965
	add r0, r4, r7
	strb r1, [r0]
	mov r0, #0
	ldrsh r1, [r2, r0]
	mov r2, #0
	ldrsh r0, [r3, r2]
	cmp r1, r0
	bge _0811C758
	ldr r3, _0811C784  @ =0x00000E15
	add r0, r4, r3
	add r0, r5, r0
	strb r6, [r0]
	ldr r7, _0811C788  @ =0x0000187F
	add r0, r4, r7
	strb r6, [r0]
	ldr r0, _0811C78C  @ =0x000016FA
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0811C790  @ =0x0000184D
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r2, _0811C794  @ =0x00001732
	add r1, r4, r2
	strb r0, [r1]
	ldr r3, _0811C798  @ =0x00001849
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r7, _0811C79C  @ =0x00001733
	add r2, r4, r7
	strb r0, [r2]
	ldrb r1, [r1]
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _0811C7A0  @ =0x00000C0A
	add r0, r4, r2
	strh r1, [r0]
	mov r2, #36
	ldr r0, _0811C7A4  @ =0x00000532
	cmp r1, r0
	beq _0811C74C
	mov r2, #48
	sub r0, r0, #170
	cmp r1, r0
	beq _0811C74C
	mov r2, #32
_0811C74C:
	ldr r0, _0811C760  @ =gRam
	ldr r3, _0811C7A8  @ =0x00000C04
	add r0, r0, r3
	strh r2, [r0]
	bl sub_08074354
_0811C758:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811C760:
	.4byte gRam
_0811C764:
	.4byte 0x000009AD
_0811C768:
	.4byte 0x00000DED
_0811C76C:
	.4byte 0x0000181D
_0811C770:
	.4byte 0x00001822
_0811C774:
	.4byte 0x00000961
_0811C778:
	.4byte 0x00000DC5
_0811C77C:
	.4byte 0x00000964
_0811C780:
	.4byte 0x00000965
_0811C784:
	.4byte 0x00000E15
_0811C788:
	.4byte 0x0000187F
_0811C78C:
	.4byte 0x000016FA
_0811C790:
	.4byte 0x0000184D
_0811C794:
	.4byte 0x00001732
_0811C798:
	.4byte 0x00001849
_0811C79C:
	.4byte 0x00001733
_0811C7A0:
	.4byte 0x00000C0A
_0811C7A4:
	.4byte 0x00000532
_0811C7A8:
	.4byte 0x00000C04
	THUMB_FUNC_END sub_0811C688

