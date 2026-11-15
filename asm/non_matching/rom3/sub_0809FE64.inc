	THUMB_FUNC_START sub_0809FE64
sub_0809FE64: @ 0x0809FE64
	push {r4,lr}
	ldr r1, _0809FEA0  @ =gRam
	ldr r0, _0809FEA4  @ =0x000016E4
	add r3, r1, r0
	ldr r0, _0809FEA8  @ =0x00000974
	add r2, r1, r0
	ldrh r0, [r3]
	ldrh r4, [r2]
	orr r0, r0, r4
	strh r0, [r3]
	ldr r0, _0809FEAC  @ =0x00000978
	add r2, r1, r0
	ldrh r0, [r2]
	orr r0, r0, r4
	strh r0, [r2]
	ldr r3, _0809FEB0  @ =gUnknown_081682F6
	ldr r2, _0809FEB4  @ =0x0000096C
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #3
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r2, _0809FEB8  @ =0x0000172E
	add r1, r1, r2
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0809FEA0:
	.4byte gRam
_0809FEA4:
	.4byte 0x000016E4
_0809FEA8:
	.4byte 0x00000974
_0809FEAC:
	.4byte 0x00000978
_0809FEB0:
	.4byte gUnknown_081682F6
_0809FEB4:
	.4byte 0x0000096C
_0809FEB8:
	.4byte 0x0000172E
	THUMB_FUNC_END sub_0809FE64

