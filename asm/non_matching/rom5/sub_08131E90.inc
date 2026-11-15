	THUMB_FUNC_START sub_08131E90
sub_08131E90: @ 0x08131E90
	push {r4,r5,lr}
	ldr r4, _08131EF8  @ =gUnknown_0822BF7E
	ldr r3, _08131EFC  @ =gRam
	ldr r1, _08131F00  @ =0x00000CF8
	add r0, r3, r1
	ldrh r0, [r0]
	add r2, r0, #0
	cmp r2, #15
	bls _08131EA4
	add r4, r4, #2
_08131EA4:
	ldr r1, _08131F04  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _08131F08  @ =0x00000978
	add r0, r3, r2
	strh r1, [r0]
	ldr r2, _08131F0C  @ =gUnknown_0822BF72
	ldr r5, _08131F10  @ =0x00000CFA
	add r0, r3, r5
	ldrh r1, [r0]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r2, [r2]
	ldr r5, _08131F14  @ =0x0000096C
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _08131F18  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r5, r5, #4
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _08131F1C  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08131F20  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
	mov r0, #208
	lsl r0, r0, #1
	mov r1, #216
	lsl r1, r1, #1
	add r2, r4, #0
	bl sub_08131D14
	pop {r4,r5}
	pop {r0}
	bx r0
_08131EF8:
	.4byte gUnknown_0822BF7E
_08131EFC:
	.4byte gRam
_08131F00:
	.4byte 0x00000CF8
_08131F04:
	.4byte gUnknown_0822BF26
_08131F08:
	.4byte 0x00000978
_08131F0C:
	.4byte gUnknown_0822BF72
_08131F10:
	.4byte 0x00000CFA
_08131F14:
	.4byte 0x0000096C
_08131F18:
	.4byte gUnknown_0822BF76
_08131F1C:
	.4byte gUnknown_0822BF7A
_08131F20:
	.4byte 0x00000974
	THUMB_FUNC_END sub_08131E90

