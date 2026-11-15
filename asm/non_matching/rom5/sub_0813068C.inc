	THUMB_FUNC_START sub_0813068C
sub_0813068C: @ 0x0813068C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0813070C  @ =gUnknown_0822BC44
	ldr r2, _08130710  @ =gRam
	ldr r3, _08130714  @ =0x00000CAC
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r7, #224
	lsl r7, r7, #4
	add r0, r0, r7
	mov r1, #2
	mov r4, #40
	ldr r6, _08130718  @ =gUnknown_02030000
	lsl r0, r0, #16
	lsr r3, r0, #16
	mov r0, #7
	mov r8, r0
	mov r9, r2
	mov r2, #202
	lsl r2, r2, #4
	add r2, r2, r9
	mov r12, r2
	ldr r7, _0813071C  @ =0x0000FF08
	mov r10, r7
_081306C8:
	mov r2, r12
	ldrh r0, [r2]
	add r0, r4, r0
	mov r2, r8
	add r4, r4, #16
	sub r5, r1, #1
	cmp r2, #0
	blt _081306F4
	lsl r0, r0, #1
	ldr r7, _08130720  @ =gUnknown_02000800
	add r1, r0, r7
_081306DE:
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _081306DE
_081306F4:
	mov r0, #255
	and r0, r0, r3
	cmp r0, #0
	beq _0813072C
	mov r0, #248
	and r0, r0, r3
	cmp r0, #248
	bne _08130724
	mov r0, r10
	and r3, r3, r0
	b _0813072C
	.byte 0x00
	.byte 0x00
_0813070C:
	.4byte gUnknown_0822BC44
_08130710:
	.4byte gRam
_08130714:
	.4byte 0x00000CAC
_08130718:
	.4byte gUnknown_02030000
_0813071C:
	.4byte 0x0000FF08
_08130720:
	.4byte gUnknown_02000800
_08130724:
	add r0, r3, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r3, r0, #16
_0813072C:
	add r1, r5, #0
	cmp r1, #0
	bge _081306C8
	ldr r2, _08130760  @ =gUnknown_02000850
	ldr r0, _08130764  @ =0x000009CC
	add r0, r0, r9
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r0, _08130768  @ =gUnknown_02000870
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	add r0, r0, #32
	strh r1, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130760:
	.4byte gUnknown_02000850
_08130764:
	.4byte 0x000009CC
_08130768:
	.4byte gUnknown_02000870
	THUMB_FUNC_END sub_0813068C

