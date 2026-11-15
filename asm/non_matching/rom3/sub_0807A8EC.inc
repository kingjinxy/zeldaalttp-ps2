	THUMB_FUNC_START sub_0807A8EC
sub_0807A8EC: @ 0x0807A8EC
	push {r4-r7,lr}
	ldr r5, _0807A9C4  @ =gRam
	ldr r0, _0807A9C8  @ =0x00000AA8
	add r0, r0, r5
	mov r12, r0
	ldr r0, _0807A9CC  @ =gUnknown_081676B2
	mov r1, r12
	ldrh r3, [r1]
	ldrh r2, [r0, #8]
	add r6, r3, #0
	and r6, r6, r2
	cmp r6, #0
	bne _0807A9BC
	mov r7, #188
	lsl r7, r7, #4
	add r4, r5, r7
	ldrh r0, [r4]
	cmp r0, #0
	beq _0807A9BC
	ldr r0, _0807A9D0  @ =0x000009AD
	add r1, r5, r0
	mov r0, #14
	strb r0, [r1]
	ldr r1, _0807A9D4  @ =0x000009E8
	add r0, r5, r1
	mov r1, #0
	strh r6, [r0]
	ldr r7, _0807A9D8  @ =0x000009E7
	add r0, r5, r7
	strb r1, [r0]
	add r0, r3, #0
	orr r0, r0, r2
	mov r1, r12
	strh r0, [r1]
	strh r6, [r4]
	ldr r2, _0807A9DC  @ =0x00000BF6
	add r0, r5, r2
	strh r6, [r0]
	ldr r3, _0807A9E0  @ =0x00000BDA
	add r0, r5, r3
	strh r6, [r0]
	ldr r1, _0807A9E4  @ =gUnknown_020022BB
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	add r1, r1, #64
	ldrb r0, [r1]
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, _0807A9E8  @ =gUnknown_02002050
	ldrh r0, [r2]
	mov r7, #128
	lsl r7, r7, #1
	add r1, r7, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0807A9EC  @ =gUnknown_0816341C
	bl sub_08088AF8
	ldr r1, _0807A9F0  @ =0x00000B1A
	add r0, r5, r1
	ldrh r4, [r0]
	mov r1, #126
	and r1, r1, r4
	lsl r1, r1, #2
	ldr r2, _0807A9F4  @ =0x00000BF2
	add r3, r5, r2
	ldr r7, _0807A9F8  @ =0x000009EA
	add r0, r5, r7
	ldrh r0, [r0]
	ldr r7, _0807A9FC  @ =0x00000BA8
	add r2, r5, r7
	lsl r0, r0, #4
	ldrh r2, [r2]
	add r0, r0, r2
	add r1, r1, r0
	add r1, r1, #40
	strh r1, [r3]
	mov r0, #252
	lsl r0, r0, #5
	and r0, r0, r4
	lsr r0, r0, #4
	ldr r2, _0807AA00  @ =0x00000BD4
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _0807AA04  @ =0x00000BD8
	add r1, r5, r3
	strh r0, [r1]
	add r7, r7, #2
	add r1, r5, r7
	ldrh r1, [r1]
	add r0, r0, r1
	add r2, r2, #32
	add r1, r5, r2
	strh r0, [r1]
	add r3, r3, #32
	add r0, r5, r3
	strh r6, [r0]
	ldr r7, _0807AA08  @ =0x00000504
	add r1, r5, r7
	mov r0, #54
	bl sub_0812A324
_0807A9BC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807A9C4:
	.4byte gRam
_0807A9C8:
	.4byte 0x00000AA8
_0807A9CC:
	.4byte gUnknown_081676B2
_0807A9D0:
	.4byte 0x000009AD
_0807A9D4:
	.4byte 0x000009E8
_0807A9D8:
	.4byte 0x000009E7
_0807A9DC:
	.4byte 0x00000BF6
_0807A9E0:
	.4byte 0x00000BDA
_0807A9E4:
	.4byte gUnknown_020022BB
_0807A9E8:
	.4byte gUnknown_02002050
_0807A9EC:
	.4byte gUnknown_0816341C
_0807A9F0:
	.4byte 0x00000B1A
_0807A9F4:
	.4byte 0x00000BF2
_0807A9F8:
	.4byte 0x000009EA
_0807A9FC:
	.4byte 0x00000BA8
_0807AA00:
	.4byte 0x00000BD4
_0807AA04:
	.4byte 0x00000BD8
_0807AA08:
	.4byte 0x00000504
	THUMB_FUNC_END sub_0807A8EC

