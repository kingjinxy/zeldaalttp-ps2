	THUMB_FUNC_START sub_08132C34
sub_08132C34: @ 0x08132C34
	push {r4,r5,lr}
	ldr r4, _08132C98  @ =gUnknown_0822BF7E
	ldr r3, _08132C9C  @ =gRam
	ldr r1, _08132CA0  @ =0x00000CF8
	add r0, r3, r1
	ldrh r0, [r0]
	add r2, r0, #0
	cmp r2, #15
	bls _08132C48
	add r4, r4, #2
_08132C48:
	ldr r1, _08132CA4  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _08132CA8  @ =0x00000978
	add r0, r3, r2
	strh r1, [r0]
	ldr r2, _08132CAC  @ =gUnknown_0822BF72
	ldr r5, _08132CB0  @ =0x00000CFA
	add r0, r3, r5
	ldrh r1, [r0]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r2, [r2]
	ldr r5, _08132CB4  @ =0x0000096C
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _08132CB8  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r5, r5, #4
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _08132CBC  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08132CC0  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
	mov r0, #32
	mov r1, #48
	add r2, r4, #0
	bl sub_08131D14
	pop {r4,r5}
	pop {r0}
	bx r0
_08132C98:
	.4byte gUnknown_0822BF7E
_08132C9C:
	.4byte gRam
_08132CA0:
	.4byte 0x00000CF8
_08132CA4:
	.4byte gUnknown_0822BF26
_08132CA8:
	.4byte 0x00000978
_08132CAC:
	.4byte gUnknown_0822BF72
_08132CB0:
	.4byte 0x00000CFA
_08132CB4:
	.4byte 0x0000096C
_08132CB8:
	.4byte gUnknown_0822BF76
_08132CBC:
	.4byte gUnknown_0822BF7A
_08132CC0:
	.4byte 0x00000974
	THUMB_FUNC_END sub_08132C34

