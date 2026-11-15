	THUMB_FUNC_START sub_081255B0
sub_081255B0: @ 0x081255B0
	push {r4-r7,lr}
	ldr r2, _08125660  @ =gRam
	ldr r1, _08125664  @ =0x00001B36
	add r0, r2, r1
	ldr r3, _08125668  @ =0x00001B24
	add r4, r2, r3
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldrh r0, [r0]
	mul r1, r0, r1
	ldr r6, _0812566C  @ =0x00001B34
	add r0, r2, r6
	ldr r7, _08125670  @ =0x00001B26
	add r5, r2, r7
	mov r3, #0
	ldrsb r3, [r5, r3]
	ldrh r0, [r0]
	add r6, r0, #0
	mul r6, r3, r6
	add r0, r6, #0
	sub r1, r1, r0
	add r7, r7, #2
	add r0, r2, r7
	strh r1, [r0]
	ldr r1, _08125674  @ =0x00001B38
	add r0, r2, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldrh r0, [r0]
	add r3, r0, #0
	mul r3, r1, r3
	ldr r6, _08125678  @ =0x00001B32
	add r0, r2, r6
	sub r7, r7, #3
	add r6, r2, r7
	mov r1, #0
	ldrsb r1, [r6, r1]
	ldrh r0, [r0]
	add r7, r0, #0
	mul r7, r1, r7
	add r0, r7, #0
	add r3, r3, r0
	ldr r1, _0812567C  @ =0x00001B3A
	add r0, r2, r1
	mov r1, #0
	ldrsb r1, [r5, r1]
	ldrh r0, [r0]
	add r7, r0, #0
	mul r7, r1, r7
	add r0, r7, #0
	add r3, r3, r0
	ldr r1, _08125680  @ =0x00001B2A
	add r0, r2, r1
	strh r3, [r0]
	ldr r3, _08125684  @ =0x00001B3C
	add r0, r2, r3
	mov r7, #0
	ldrsh r1, [r0, r7]
	mov r0, #0
	ldrsb r0, [r4, r0]
	mul r0, r1, r0
	sub r3, r3, #12
	add r1, r2, r3
	mov r4, #0
	ldrsh r3, [r1, r4]
	mov r1, #0
	ldrsb r1, [r6, r1]
	mul r1, r3, r1
	sub r0, r0, r1
	ldr r6, _08125688  @ =0x00001B3E
	add r1, r2, r6
	mov r7, #0
	ldrsh r3, [r1, r7]
	mov r1, #0
	ldrsb r1, [r5, r1]
	mul r1, r3, r1
	add r0, r0, r1
	ldr r3, _0812568C  @ =0x00001B14
	add r1, r2, r3
	asr r0, r0, #8
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r4, _08125690  @ =0x00001B2C
	add r2, r2, r4
	strh r0, [r2]
	pop {r4-r7}
	pop {r0}
	bx r0
_08125660:
	.4byte gRam
_08125664:
	.4byte 0x00001B36
_08125668:
	.4byte 0x00001B24
_0812566C:
	.4byte 0x00001B34
_08125670:
	.4byte 0x00001B26
_08125674:
	.4byte 0x00001B38
_08125678:
	.4byte 0x00001B32
_0812567C:
	.4byte 0x00001B3A
_08125680:
	.4byte 0x00001B2A
_08125684:
	.4byte 0x00001B3C
_08125688:
	.4byte 0x00001B3E
_0812568C:
	.4byte 0x00001B14
_08125690:
	.4byte 0x00001B2C
	THUMB_FUNC_END sub_081255B0

