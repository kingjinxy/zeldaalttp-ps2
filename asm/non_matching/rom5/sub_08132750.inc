	THUMB_FUNC_START sub_08132750
sub_08132750: @ 0x08132750
	push {r4,r5,lr}
	ldr r4, _081327B4  @ =gUnknown_0822BF7E
	ldr r3, _081327B8  @ =gRam
	ldr r1, _081327BC  @ =0x00000CF8
	add r0, r3, r1
	ldrh r0, [r0]
	add r2, r0, #0
	cmp r2, #15
	bls _08132764
	add r4, r4, #2
_08132764:
	ldr r1, _081327C0  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _081327C4  @ =0x00000978
	add r0, r3, r2
	strh r1, [r0]
	ldr r2, _081327C8  @ =gUnknown_0822BF72
	ldr r5, _081327CC  @ =0x00000CFA
	add r0, r3, r5
	ldrh r1, [r0]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r2, [r2]
	ldr r5, _081327D0  @ =0x0000096C
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _081327D4  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r5, r5, #4
	add r0, r3, r5
	strh r2, [r0]
	ldr r0, _081327D8  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _081327DC  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
	mov r0, #160
	mov r1, #176
	add r2, r4, #0
	bl sub_08131D14
	pop {r4,r5}
	pop {r0}
	bx r0
_081327B4:
	.4byte gUnknown_0822BF7E
_081327B8:
	.4byte gRam
_081327BC:
	.4byte 0x00000CF8
_081327C0:
	.4byte gUnknown_0822BF26
_081327C4:
	.4byte 0x00000978
_081327C8:
	.4byte gUnknown_0822BF72
_081327CC:
	.4byte 0x00000CFA
_081327D0:
	.4byte 0x0000096C
_081327D4:
	.4byte gUnknown_0822BF76
_081327D8:
	.4byte gUnknown_0822BF7A
_081327DC:
	.4byte 0x00000974
	THUMB_FUNC_END sub_08132750

