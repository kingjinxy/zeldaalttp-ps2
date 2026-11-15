	THUMB_FUNC_START sub_0810E70C
sub_0810E70C: @ 0x0810E70C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810E784  @ =gRam
	ldr r1, _0810E788  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0810E744
	ldr r2, _0810E78C  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bne _0810E73C
	mov r1, #2
_0810E73C:
	ldr r2, _0810E790  @ =0x00001082
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_0810E744:
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080E67E8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E77E
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _0810E794  @ =gUnknown_0817D0B8
	ldr r0, _0810E784  @ =gRam
	ldr r2, _0810E798  @ =0x00001052
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #5
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
_0810E77E:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810E784:
	.4byte gRam
_0810E788:
	.4byte 0x00000996
_0810E78C:
	.4byte 0x00000F92
_0810E790:
	.4byte 0x00001082
_0810E794:
	.4byte gUnknown_0817D0B8
_0810E798:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810E70C

