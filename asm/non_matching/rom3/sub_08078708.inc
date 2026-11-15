	THUMB_FUNC_START sub_08078708
sub_08078708: @ 0x08078708
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_08078640
	ldr r2, _0807879C  @ =gRam
	ldr r3, _080787A0  @ =0x000001FF
	add r1, r3, #0
	and r0, r0, r1
	mov r7, #150
	lsl r7, r7, #4
	add r1, r2, r7
	strh r0, [r1]
	mov r4, #2
	mov r0, #0
	ldrsh r5, [r1, r0]
	ldr r1, _080787A4  @ =0x000009C6
	add r1, r1, r2
	mov r8, r1
	ldr r3, _080787A8  @ =gUnknown_08150D10
	mov r12, r3
	ldr r6, _080787AC  @ =gUnknown_08150D16
	ldr r7, _080787B0  @ =0x00001727
	add r7, r7, r2
	mov r9, r7
	ldr r0, _080787B4  @ =0x00000ABE
	add r0, r0, r2
	mov r10, r0
_08078744:
	lsl r3, r4, #1
	mov r1, r12
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r5, r0
	bne _080787C8
	add r1, r3, r6
	mov r7, r8
	ldrh r0, [r7]
	ldrh r1, [r1]
	cmp r0, r1
	bne _080787C8
	ldr r1, _080787B8  @ =gUnknown_08150D1C
	add r0, r3, r1
	ldrh r0, [r0]
	mov r3, r9
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r4, #3
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08078782
	mov r3, #1
_08078776:
	asr r1, r1, #1
	sub r4, r4, #1
	add r0, r1, #0
	and r0, r0, r3
	cmp r0, #0
	beq _08078776
_08078782:
	mov r7, r10
	strh r4, [r7]
	ldr r1, _080787BC  @ =0x00000C0E
	add r0, r2, r1
	strh r4, [r0]
	mov r0, #36
	ldr r3, _080787C0  @ =gUnknown_03002BDD
	strb r0, [r3]
	ldr r7, _080787C4  @ =0x000009E8
	add r0, r2, r7
	mov r1, #0
	strh r1, [r0]
	b _080787CE
_0807879C:
	.4byte gRam
_080787A0:
	.4byte 0x000001FF
_080787A4:
	.4byte 0x000009C6
_080787A8:
	.4byte gUnknown_08150D10
_080787AC:
	.4byte gUnknown_08150D16
_080787B0:
	.4byte 0x00001727
_080787B4:
	.4byte 0x00000ABE
_080787B8:
	.4byte gUnknown_08150D1C
_080787BC:
	.4byte 0x00000C0E
_080787C0:
	.4byte gUnknown_03002BDD
_080787C4:
	.4byte 0x000009E8
_080787C8:
	sub r4, r4, #1
	cmp r4, #0
	bge _08078744
_080787CE:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08078708

