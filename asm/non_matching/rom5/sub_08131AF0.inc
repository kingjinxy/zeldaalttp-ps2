	THUMB_FUNC_START sub_08131AF0
sub_08131AF0: @ 0x08131AF0
	push {lr}
	ldr r0, _08131B38  @ =gRam
	ldr r1, _08131B3C  @ =0x00000CFA
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #255
	beq _08131BB8
	cmp r0, #2
	bne _08131B40
	mov r0, #0
	mov r1, #1
	bl sub_081318E0
	mov r0, #33
	mov r1, #128
	bl sub_081318E0
	mov r0, #128
	lsl r0, r0, #1
	mov r1, #172
	lsl r1, r1, #1
	bl sub_081318E0
	mov r0, #176
	lsl r0, r0, #1
	mov r1, #184
	lsl r1, r1, #1
	bl sub_081318E0
	mov r0, #192
	lsl r0, r0, #1
	mov r1, #128
	lsl r1, r1, #2
	bl sub_081318E0
	b _08131B74
_08131B38:
	.4byte gRam
_08131B3C:
	.4byte 0x00000CFA
_08131B40:
	mov r0, #0
	mov r1, #1
	bl sub_08131998
	mov r0, #33
	mov r1, #128
	bl sub_08131998
	mov r0, #128
	lsl r0, r0, #1
	mov r1, #172
	lsl r1, r1, #1
	bl sub_08131998
	mov r0, #176
	lsl r0, r0, #1
	mov r1, #184
	lsl r1, r1, #1
	bl sub_08131998
	mov r0, #192
	lsl r0, r0, #1
	mov r1, #128
	lsl r1, r1, #2
	bl sub_08131998
_08131B74:
	ldr r1, _08131BBC  @ =gUnknown_02000C20
	ldr r0, _08131BC0  @ =gUnknown_02000C00
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	add r1, r1, #32
	strh r0, [r1]
	bl sub_08131A50
_08131BB8:
	pop {r0}
	bx r0
_08131BBC:
	.4byte gUnknown_02000C20
_08131BC0:
	.4byte gUnknown_02000C00
	THUMB_FUNC_END sub_08131AF0

