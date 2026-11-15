	THUMB_FUNC_START sub_08131840
sub_08131840: @ 0x08131840
	push {lr}
	ldr r1, _081318A8  @ =gRam
	ldr r2, _081318AC  @ =0x00000B6E
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081318D4
	ldr r2, _081318B0  @ =0x000009C6
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #67
	beq _08131860
	cmp r0, #69
	beq _08131860
	cmp r0, #71
	bne _081318D4
_08131860:
	bl sub_08131710
	ldr r2, _081318A8  @ =gRam
	ldr r1, _081318B0  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #67
	beq _08131874
	cmp r0, #69
	bne _081318CA
_08131874:
	ldr r0, _081318B4  @ =gUnknown_020022C3
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _081318CA
	ldr r0, _081318B8  @ =0x0000164F
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _081318C4
	add r0, r1, #0
	add r0, r0, #65
	strb r0, [r2]
	mov r1, #192
	and r0, r0, r1
	lsr r0, r0, #2
	ldr r1, _081318BC  @ =gUnknown_0200BB50
	add r0, r0, r1
	ldr r1, _081318C0  @ =gUnknown_020008D0
	mov r2, #7
	bl CpuSet
	b _081318D4
_081318A8:
	.4byte gRam
_081318AC:
	.4byte 0x00000B6E
_081318B0:
	.4byte 0x000009C6
_081318B4:
	.4byte gUnknown_020022C3
_081318B8:
	.4byte 0x0000164F
_081318BC:
	.4byte gUnknown_0200BB50
_081318C0:
	.4byte gUnknown_020008D0
_081318C4:
	bl sub_081312D0
	b _081318D4
_081318CA:
	ldr r0, _081318D8  @ =gUnknown_0200BB90
	ldr r1, _081318DC  @ =gUnknown_02000CD0
	mov r2, #7
	bl CpuSet
_081318D4:
	pop {r0}
	bx r0
_081318D8:
	.4byte gUnknown_0200BB90
_081318DC:
	.4byte gUnknown_02000CD0
	THUMB_FUNC_END sub_08131840

