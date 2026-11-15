	THUMB_FUNC_START sub_08104A54
sub_08104A54: @ 0x08104A54
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _08104AB0  @ =gRam
	ldr r2, _08104AB4  @ =0x000010E2
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08104A74
	ldr r2, _08104AB8  @ =0x00000F92
	add r0, r5, r2
	add r0, r1, r0
	mov r1, #3
	strb r1, [r0]
_08104A74:
	add r0, r4, #0
	bl sub_081049D4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08104AA8
	add r0, r4, #0
	bl sub_08104974
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _08104ABC  @ =gUnknown_0817BCB0
	ldr r2, _08104AC0  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08104AA8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08104AB0:
	.4byte gRam
_08104AB4:
	.4byte 0x000010E2
_08104AB8:
	.4byte 0x00000F92
_08104ABC:
	.4byte gUnknown_0817BCB0
_08104AC0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08104A54

