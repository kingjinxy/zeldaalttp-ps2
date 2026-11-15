	THUMB_FUNC_START sub_08113F80
sub_08113F80: @ 0x08113F80
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0811404C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08113FDE
	ldr r1, _08113FE4  @ =gRam
	ldr r2, _08113FE8  @ =0x000010C2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08113FBA
	ldr r2, _08113FEC  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _08113FBA
	add r0, r4, #0
	mov r1, #0
	bl sub_08113EA4
_08113FBA:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08113FDE
	ldr r1, _08113FF0  @ =gUnknown_0817D888
	ldr r0, _08113FE4  @ =gRam
	ldr r2, _08113FEC  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08113FDE:
	pop {r4}
	pop {r0}
	bx r0
_08113FE4:
	.4byte gRam
_08113FE8:
	.4byte 0x000010C2
_08113FEC:
	.4byte 0x00000F52
_08113FF0:
	.4byte gUnknown_0817D888
	THUMB_FUNC_END sub_08113F80

