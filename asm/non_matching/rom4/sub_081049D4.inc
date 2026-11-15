	THUMB_FUNC_START sub_081049D4
sub_081049D4: @ 0x081049D4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08104A38  @ =gRam
	ldr r2, _08104A3C  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #2
	bne _081049FC
	ldr r1, _08104A40  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _081049FC
	ldr r1, _08104A44  @ =gUnknown_03003E74
	mov r0, #0
	strh r0, [r1]
_081049FC:
	ldr r2, _08104A48  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _08104A4C  @ =gUnknown_0817BCDC
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	ldr r1, _08104A3C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _08104A32
	ldr r2, _08104A50  @ =0x00000D94
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #241
	and r1, r1, r2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080CA5AC
_08104A32:
	pop {r4,r5}
	pop {r0}
	bx r0
_08104A38:
	.4byte gRam
_08104A3C:
	.4byte 0x00000F52
_08104A40:
	.4byte 0x00000FA2
_08104A44:
	.4byte gUnknown_03003E74
_08104A48:
	.4byte 0x00000F92
_08104A4C:
	.4byte gUnknown_0817BCDC
_08104A50:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_081049D4

