	THUMB_FUNC_START sub_080E2024
sub_080E2024: @ 0x080E2024
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080E2048  @ =gRam
	ldr r1, _080E204C  @ =0x00001042
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080E207A
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E2050
	add r0, r4, #0
	bl sub_080C36D8
	b _080E2058
_080E2048:
	.4byte gRam
_080E204C:
	.4byte 0x00001042
_080E2050:
	add r0, r4, #0
	bl sub_080C3028
	add r0, r0, #2
_080E2058:
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080E2080  @ =gRam
	ldr r0, _080E2084  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080E2088  @ =gUnknown_08176900
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E208C  @ =0x00000F12
	add r2, r2, r1
	add r2, r4, r2
	ldr r0, _080E2090  @ =gUnknown_08176904
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
_080E207A:
	pop {r4}
	pop {r0}
	bx r0
_080E2080:
	.4byte gRam
_080E2084:
	.4byte 0x00000F22
_080E2088:
	.4byte gUnknown_08176900
_080E208C:
	.4byte 0x00000F12
_080E2090:
	.4byte gUnknown_08176904
	THUMB_FUNC_END sub_080E2024

