	THUMB_FUNC_START sub_081127B8
sub_081127B8: @ 0x081127B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _0811281C  @ =gRam
	ldr r1, _08112820  @ =0x00000F72
	add r5, r4, r1
	add r5, r0, r5
	mov r1, #0
	strb r1, [r5]
	ldr r2, _08112824  @ =0x00000FC2
	add r1, r4, r2
	add r1, r0, r1
	ldr r2, _08112828  @ =gUnknown_0817D809
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _0811282C  @ =0x00000F92
	add r2, r4, r1
	add r2, r0, r2
	ldr r3, _08112830  @ =gUnknown_0817D804
	ldrb r1, [r5]
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _08112834  @ =0x00000FB2
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #2
	strb r2, [r1]
	ldr r2, _08112838  @ =gUnknown_02010990
	mov r1, #21
	strb r1, [r2]
	ldr r2, _0811283C  @ =0x00000F52
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #4
	strb r2, [r1]
	ldr r2, _08112840  @ =gUnknown_02010993
	mov r1, #1
	strb r1, [r2]
	ldr r1, _08112844  @ =0x00000EA5
	add r4, r4, r1
	add r0, r0, r4
	ldrb r2, [r0]
	mov r1, #240
	and r1, r1, r2
	add r1, r1, #9
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0811281C:
	.4byte gRam
_08112820:
	.4byte 0x00000F72
_08112824:
	.4byte 0x00000FC2
_08112828:
	.4byte gUnknown_0817D809
_0811282C:
	.4byte 0x00000F92
_08112830:
	.4byte gUnknown_0817D804
_08112834:
	.4byte 0x00000FB2
_08112838:
	.4byte gUnknown_02010990
_0811283C:
	.4byte 0x00000F52
_08112840:
	.4byte gUnknown_02010993
_08112844:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_081127B8

