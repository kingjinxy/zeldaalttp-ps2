	THUMB_FUNC_START sub_08101900
sub_08101900: @ 0x08101900
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08101938  @ =gRam
	ldr r0, _0810193C  @ =0x00001172
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _08101940  @ =0x00000FC2
	add r0, r5, r2
	add r6, r4, r0
	ldrb r3, [r6]
	strb r3, [r1]
	lsl r0, r3, #24
	cmp r0, #0
	beq _0810194C
	ldr r0, _08101944  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _08101948  @ =gUnknown_0817B32C
	mov r0, #1
	and r0, r0, r3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_MoveHoriz
	b _081019B0
_08101938:
	.4byte gRam
_0810193C:
	.4byte 0x00001172
_08101940:
	.4byte 0x00000FC2
_08101944:
	.4byte 0x00000F22
_08101948:
	.4byte gUnknown_0817B32C
_0810194C:
	ldr r2, _081019B8  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081019BC  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r2, r2, #80
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #5
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _081019C0  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _081019C4  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #8
	bl sub_08079844
	ldr r1, _081019C8  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	ldr r2, _081019CC  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	mov r0, #80
	strb r0, [r6]
_081019B0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081019B8:
	.4byte 0x00000F52
_081019BC:
	.4byte 0x00000EE2
_081019C0:
	.4byte 0x00000ED2
_081019C4:
	.4byte 0x00000EF2
_081019C8:
	.4byte 0x00000FD2
_081019CC:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08101900

