	THUMB_FUNC_START sub_080FADB8
sub_080FADB8: @ 0x080FADB8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r6, _080FAF30  @ =gRam
	ldr r1, _080FAF34  @ =0x00000FB2
	add r0, r6, r1
	add r0, r7, r0
	mov r2, #1
	mov r1, #1
	strb r1, [r0]
	ldr r3, _080FAF38  @ =0x00000F92
	add r1, r6, r3
	add r1, r7, r1
	ldr r3, _080FAF3C  @ =0x00000996
	add r0, r6, r3
	ldrb r0, [r0]
	lsr r0, r0, #3
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _080FAF40  @ =0x00001122
	add r0, r0, r6
	mov r10, r0
	add r1, r7, r0
	ldrb r0, [r1]
	mov r2, #48
	mov r9, r2
	mov r4, #0
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080FACFC
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FAE10
	b _080FAF22
_080FAE10:
	ldr r1, _080FAF44  @ =0x00000FC2
	add r0, r6, r1
	add r0, r0, r7
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FAED8
	mov r0, #217
	add r1, r7, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080FAED8
	ldr r2, _080FAF48  @ =0x00000EE2
	add r3, r6, r2
	add r0, r7, r3
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	strb r0, [r1]
	ldr r0, _080FAF4C  @ =0x00000F02
	add r2, r6, r0
	add r0, r7, r2
	ldrb r0, [r0]
	mov r12, r0
	ldr r0, _080FAF50  @ =0x00000961
	add r4, r6, r0
	mov r0, r12
	strb r0, [r4]
	ldrh r0, [r1]
	add r0, r0, #16
	strh r0, [r1]
	add r3, r5, r3
	ldrb r0, [r1]
	strb r0, [r3]
	add r2, r5, r2
	ldrb r0, [r4]
	strb r0, [r2]
	ldr r1, _080FAF54  @ =0x00000ED2
	add r3, r6, r1
	add r0, r7, r3
	ldrb r0, [r0]
	ldr r2, _080FAF58  @ =0x00000964
	add r1, r6, r2
	strb r0, [r1]
	ldr r0, _080FAF5C  @ =0x00000EF2
	add r2, r6, r0
	add r0, r7, r2
	ldrb r0, [r0]
	mov r12, r0
	ldr r0, _080FAF60  @ =0x00000965
	add r4, r6, r0
	mov r0, r12
	strb r0, [r4]
	ldrh r0, [r1]
	sub r0, r0, #8
	strh r0, [r1]
	add r3, r5, r3
	ldrb r0, [r1]
	strb r0, [r3]
	add r2, r5, r2
	ldrb r0, [r4]
	strb r0, [r2]
	ldr r1, _080FAF64  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #248
	strb r1, [r0]
	ldr r2, _080FAF68  @ =0x00001152
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #40
	strb r1, [r0]
	ldr r3, _080FAF6C  @ =0x000010B2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080FAF70  @ =0x00001032
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #239
	and r0, r0, r2
	strb r0, [r1]
	mov r2, r10
	add r1, r5, r2
	ldrb r0, [r1]
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r1]
	mov r0, #16
	mov r1, r8
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #11
	bl sub_080CF140
_080FAED8:
	mov r4, #15
	ldr r5, _080FAF30  @ =gRam
	mov r6, #0
	ldr r2, _080FAF74  @ =0x00000FA2
	add r2, r2, r5
	mov r8, r2
_080FAEE4:
	ldr r3, _080FAF78  @ =0x00000FF2
	add r0, r5, r3
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #217
	bne _080FAF1C
	ldr r1, _080FAF68  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FAF1C
	ldr r3, _080FAF7C  @ =0x00001142
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080FAF1C
	strb r6, [r2]
	mov r1, r8
	add r0, r4, r1
	strb r6, [r0]
	add r0, r7, #0
	mov r1, #116
	bl sub_080CF140
_080FAF1C:
	sub r4, r4, #1
	cmp r4, #0
	bge _080FAEE4
_080FAF22:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FAF30:
	.4byte gRam
_080FAF34:
	.4byte 0x00000FB2
_080FAF38:
	.4byte 0x00000F92
_080FAF3C:
	.4byte 0x00000996
_080FAF40:
	.4byte 0x00001122
_080FAF44:
	.4byte 0x00000FC2
_080FAF48:
	.4byte 0x00000EE2
_080FAF4C:
	.4byte 0x00000F02
_080FAF50:
	.4byte 0x00000961
_080FAF54:
	.4byte 0x00000ED2
_080FAF58:
	.4byte 0x00000964
_080FAF5C:
	.4byte 0x00000EF2
_080FAF60:
	.4byte 0x00000965
_080FAF64:
	.4byte 0x00000F22
_080FAF68:
	.4byte 0x00001152
_080FAF6C:
	.4byte 0x000010B2
_080FAF70:
	.4byte 0x00001032
_080FAF74:
	.4byte 0x00000FA2
_080FAF78:
	.4byte 0x00000FF2
_080FAF7C:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080FADB8

