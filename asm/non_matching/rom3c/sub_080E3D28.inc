	THUMB_FUNC_START sub_080E3D28
sub_080E3D28: @ 0x080E3D28
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E3D7A
	ldr r1, _080E3D84  @ =gUnknown_081771C4
	ldr r4, _080E3D88  @ =gRam
	ldr r0, _080E3D8C  @ =0x00000FB2
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080E2720
	ldr r1, _080E3D90  @ =gUnknown_081771C8
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080E22D0
	ldr r1, _080E3D94  @ =gUnknown_081771C0
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080E3BF0
	add r0, r5, #0
	bl sub_080E2684
_080E3D7A:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3D84:
	.4byte gUnknown_081771C4
_080E3D88:
	.4byte gRam
_080E3D8C:
	.4byte 0x00000FB2
_080E3D90:
	.4byte gUnknown_081771C8
_080E3D94:
	.4byte gUnknown_081771C0
	THUMB_FUNC_END sub_080E3D28

