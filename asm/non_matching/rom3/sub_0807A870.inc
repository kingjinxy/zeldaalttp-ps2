	THUMB_FUNC_START sub_0807A870
sub_0807A870: @ 0x0807A870
	push {r4,r5,lr}
	ldr r4, _0807A8C8  @ =gRam
	mov r0, #188
	lsl r0, r0, #4
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #0
	beq _0807A8C0
	ldr r0, _0807A8CC  @ =0x00000504
	add r1, r4, r0
	mov r0, #54
	bl sub_0812A324
	ldr r0, _0807A8D0  @ =0x000009AD
	add r1, r4, r0
	mov r3, #0
	mov r0, #13
	strb r0, [r1]
	ldr r1, _0807A8D4  @ =0x000009E8
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	ldr r0, _0807A8D8  @ =0x00000ACA
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	ldr r1, _0807A8DC  @ =0x000009E7
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _0807A8E0  @ =0x00000AA8
	add r2, r4, r0
	ldr r1, _0807A8E4  @ =gUnknown_081676B2
	ldrh r0, [r2]
	ldrh r1, [r1, #8]
	orr r0, r0, r1
	strh r0, [r2]
	strh r3, [r5]
	ldr r1, _0807A8E8  @ =0x00000B04
	add r0, r4, r1
	strh r3, [r0]
_0807A8C0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807A8C8:
	.4byte gRam
_0807A8CC:
	.4byte 0x00000504
_0807A8D0:
	.4byte 0x000009AD
_0807A8D4:
	.4byte 0x000009E8
_0807A8D8:
	.4byte 0x00000ACA
_0807A8DC:
	.4byte 0x000009E7
_0807A8E0:
	.4byte 0x00000AA8
_0807A8E4:
	.4byte gUnknown_081676B2
_0807A8E8:
	.4byte 0x00000B04
	THUMB_FUNC_END sub_0807A870

