	THUMB_FUNC_START sub_0809DDF4
sub_0809DDF4: @ 0x0809DDF4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #16
	ldr r2, _0809DE6C  @ =gRam
	ldr r1, _0809DE70  @ =0x000016C4
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _0809DE74  @ =0x00001608
	add r0, r2, r3
	mov r4, #0
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrh r1, [r0]
	add r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _0809DE78  @ =0x00001793
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DE26
	b _0809E01E
_0809DE26:
	ldr r3, _0809DE7C  @ =0x00001805
	add r0, r2, r3
	strb r4, [r0]
	sub r1, r1, #155
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _0809DE80  @ =0x00001702
	add r0, r2, r3
	strb r4, [r0]
	ldr r1, _0809DE84  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809DE94
	ldr r0, _0809DE88  @ =0x000016CD
	add r3, r2, r0
	mov r5, #254
	strb r5, [r3]
	ldr r0, _0809DE8C  @ =0x00001803
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809DEB8
	strb r4, [r1]
	strb r4, [r3]
	ldr r1, _0809DE90  @ =0x000016CE
	add r0, r2, r1
	strb r5, [r0]
	b _0809DEB8
	.byte 0x00
	.byte 0x00
_0809DE6C:
	.4byte gRam
_0809DE70:
	.4byte 0x000016C4
_0809DE74:
	.4byte 0x00001608
_0809DE78:
	.4byte 0x00001793
_0809DE7C:
	.4byte 0x00001805
_0809DE80:
	.4byte 0x00001702
_0809DE84:
	.4byte 0x00000B0A
_0809DE88:
	.4byte 0x000016CD
_0809DE8C:
	.4byte 0x00001803
_0809DE90:
	.4byte 0x000016CE
_0809DE94:
	ldr r3, _0809DEF4  @ =0x000016CD
	add r5, r2, r3
	mov r3, #254
	strb r3, [r5]
	ldr r0, _0809DEF8  @ =0x00001803
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809DEB8
	strb r4, [r1]
	strb r3, [r5]
	ldr r3, _0809DEFC  @ =0x000016CE
	add r1, r2, r3
	mov r0, #2
	strb r0, [r1]
_0809DEB8:
	bl sub_080978AC
	bl sub_08097024
	ldr r3, _0809DF00  @ =gRam
	ldr r1, _0809DEF8  @ =0x00001803
	add r0, r3, r1
	ldrb r2, [r0]
	cmp r2, #0
	bne _0809DF18
	ldr r0, _0809DF04  @ =0x0000180A
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809DF18
	strb r2, [r1]
	ldr r1, _0809DF08  @ =0x00000B0A
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809DF10
	ldr r2, _0809DF0C  @ =0x000016D5
	add r1, r3, r2
	mov r0, #4
	b _0809DF16
_0809DEF4:
	.4byte 0x000016CD
_0809DEF8:
	.4byte 0x00001803
_0809DEFC:
	.4byte 0x000016CE
_0809DF00:
	.4byte gRam
_0809DF04:
	.4byte 0x0000180A
_0809DF08:
	.4byte 0x00000B0A
_0809DF0C:
	.4byte 0x000016D5
_0809DF10:
	ldr r0, _0809DFC8  @ =0x000016D5
	add r1, r3, r0
	mov r0, #6
_0809DF16:
	strb r0, [r1]
_0809DF18:
	ldr r4, _0809DFCC  @ =gRam
	ldr r1, _0809DFD0  @ =0x000016C4
	add r7, r4, r1
	ldr r2, _0809DFD4  @ =0x0000170C
	add r2, r2, r4
	mov r8, r2
	ldrb r0, [r7]
	ldrb r1, [r2]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0809DF3C
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_0809DF3C:
	cmp r1, #0
	bne _0809E01E
	bl sub_0806E5A0
	ldr r3, _0809DFD8  @ =0x00001663
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DF52
	bl sub_08114600
_0809DF52:
	mov r0, #150
	lsl r0, r0, #4
	add r3, r4, r0
	mov r0, #248
	strb r0, [r3]
	ldr r2, _0809DFDC  @ =0x00000961
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r0, _0809DFE0  @ =0x00000B0A
	add r5, r4, r0
	ldrh r1, [r5]
	mov r6, #4
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809DF78
	mov r0, #12
	strh r0, [r3]
_0809DF78:
	ldrh r2, [r7]
	ldrh r0, [r3]
	add r0, r2, r0
	mov r1, r8
	strh r0, [r1]
	ldr r3, _0809DFE4  @ =0x00001793
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0809DFE8  @ =0x0000180A
	add r1, r4, r0
	mov r0, #6
	strb r0, [r1]
	ldrh r1, [r5]
	add r0, r6, #0
	and r0, r0, r1
	add r1, r2, #0
	cmp r0, #0
	bne _0809DFF4
	ldr r2, _0809DFEC  @ =0x00000952
	add r0, r4, r2
	ldrh r0, [r0]
	sub r0, r1, r0
	lsl r0, r0, #16
	sub r3, r3, #211
	add r1, r4, r3
	ldr r3, _0809DFF0  @ =0x00000958
	add r2, r4, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp]
	mov r0, #50
	mov r1, sp
	bl sub_0812A324
	b _0809E01E
_0809DFC8:
	.4byte 0x000016D5
_0809DFCC:
	.4byte gRam
_0809DFD0:
	.4byte 0x000016C4
_0809DFD4:
	.4byte 0x0000170C
_0809DFD8:
	.4byte 0x00001663
_0809DFDC:
	.4byte 0x00000961
_0809DFE0:
	.4byte 0x00000B0A
_0809DFE4:
	.4byte 0x00001793
_0809DFE8:
	.4byte 0x0000180A
_0809DFEC:
	.4byte 0x00000952
_0809DFF0:
	.4byte 0x00000958
_0809DFF4:
	ldr r1, _0809E02C  @ =0x00000952
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #16
	mov r2, #182
	lsl r2, r2, #5
	add r1, r4, r2
	ldr r3, _0809E030  @ =0x00000958
	add r2, r4, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp, #8]
	add r1, sp, #8
	mov r0, #52
	bl sub_0812A324
_0809E01E:
	add sp, sp, #16
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E02C:
	.4byte 0x00000952
_0809E030:
	.4byte 0x00000958
	THUMB_FUNC_END sub_0809DDF4

