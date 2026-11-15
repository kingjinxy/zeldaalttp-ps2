	THUMB_FUNC_START sub_080DA660
sub_080DA660: @ 0x080DA660
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080DA6B0  @ =gRam
	ldr r1, _080DA6B4  @ =0x000010E2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080DA6AA
	ldr r1, _080DA6B8  @ =0x00000F82
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DA68C
	ldr r1, _080DA6BC  @ =gUnknown_03003E74
	mov r0, #64
	strh r0, [r1]
_080DA68C:
	ldr r1, _080DA6C0  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080DA6C4  @ =gUnknown_08175A1C
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	mov r1, #18
	bl sub_080C57F8
_080DA6AA:
	pop {r4}
	pop {r0}
	bx r0
_080DA6B0:
	.4byte gRam
_080DA6B4:
	.4byte 0x000010E2
_080DA6B8:
	.4byte 0x00000F82
_080DA6BC:
	.4byte gUnknown_03003E74
_080DA6C0:
	.4byte 0x00000F92
_080DA6C4:
	.4byte gUnknown_08175A1C
	THUMB_FUNC_END sub_080DA660

