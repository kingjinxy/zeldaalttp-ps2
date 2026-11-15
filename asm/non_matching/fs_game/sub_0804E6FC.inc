	THUMB_FUNC_START sub_0804E6FC
sub_0804E6FC: @ 0x0804E6FC
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #8]
	ldr r0, [r7]
	bl 0x08009308
	add r1, r7, #0
	add r1, r1, #12
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	ldr r0, _0804E748  @ =0x00004002
	cmp r1, r0
	bne _0804E72E
	b _0804E9A6
_0804E72E:
	add r1, r7, #0
	add r1, r1, #12
	ldrh r0, [r1]
	ldr r1, _0804E74C  @ =0x00004006
	cmp r0, r1
	ble _0804E73C
	b _0804E8E4
_0804E73C:
	ldr r1, _0804E750  @ =0x00004003
	cmp r0, r1
	bge _0804E744
	b _0804E8E4
_0804E744:
	b _0804E754
	.byte 0x00
	.byte 0x00
_0804E748:
	.4byte 0x00004002
_0804E74C:
	.4byte 0x00004006
_0804E750:
	.4byte 0x00004003
_0804E754:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	add r1, r2, #0
	sub r2, r1, #3
	add r3, r2, #0
	lsl r1, r3, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, _0804E88C  @ =0x08003566
	ldr r0, [r7]
	ldr r2, _0804E890  @ =gUnknown_084289B0
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsr r4, r3, #2
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r0, [r0, #50]
	add r2, r2, r0
	add r3, r2, #0
	lsl r0, r3, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	ldr r3, _0804E890  @ =gUnknown_084289B0
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #43
	ldrb r4, [r5]
	lsr r5, r4, #2
	add r4, r5, #0
	lsl r5, r4, #24
	lsr r4, r5, #24
	add r5, r4, #1
	add r3, r3, r5
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r3, r4, #0
	ldrh r0, [r0, #54]
	add r3, r3, r0
	add r4, r3, #0
	lsl r0, r4, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	bl 0x08003748
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804E89C
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E894  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E894  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E894  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E894  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r0, #0
	ldr r2, _0804E898  @ =0x00002004
	add r3, r0, r2
	add r0, r3, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #106
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	mov r0, #21
	bl sub_08003DFC
	b _0804E8D8
	.byte 0x00
	.byte 0x00
_0804E88C:
	.4byte 0x08003566
_0804E890:
	.4byte gUnknown_084289B0
_0804E894:
	.4byte gUnknown_03000450
_0804E898:
	.4byte 0x00002004
_0804E89C:
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E8DC  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E8DC  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804E8E0  @ =0x00004002
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0804E8D8:
	b _0804E9A4
	.byte 0x00
	.byte 0x00
_0804E8DC:
	.4byte gUnknown_03000450
_0804E8E0:
	.4byte 0x00004002
_0804E8E4:
	ldr r0, [r7]
	bl 0x0800935C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #66
	bne _0804E8FE
	ldr r0, [r7]
	mov r1, #0
	mov r2, #0
	bl sub_0804CB38
	b _0804E98C
_0804E8FE:
	add r0, r7, #0
	add r0, r0, #12
	ldr r2, _0804E998  @ =0x00004007
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E99C  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E99C  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #8]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804E99C  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804E99C  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r0, #0
	ldr r2, _0804E9A0  @ =0x00002004
	add r3, r0, r2
	add r0, r3, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #106
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804E98C:
	ldr r0, [r7]
	mov r1, #0
	bl sub_0804EF98
	b _0804E9A4
	.byte 0x00
	.byte 0x00
_0804E998:
	.4byte 0x00004007
_0804E99C:
	.4byte gUnknown_03000450
_0804E9A0:
	.4byte 0x00002004
_0804E9A4:
	b _0804E9AC
_0804E9A6:
	ldr r0, [r7]
	bl 0x080077D0
_0804E9AC:
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804E6FC

