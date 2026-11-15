	THUMB_FUNC_START sub_08114908
sub_08114908: @ 0x08114908
	push {r4,r5,lr}
	ldr r1, _08114924  @ =gRam
	ldr r2, _08114928  @ =0x00001663
	add r0, r1, r2
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #0
	beq _081149E0
	cmp r0, #14
	bne _0811492C
	bl sub_08115CA4
	b _081149E0
	.byte 0x00
	.byte 0x00
_08114924:
	.4byte gRam
_08114928:
	.4byte 0x00001663
_0811492C:
	mov r4, #2
	ldr r1, _08114954  @ =gUnknown_0817E9DC
	ldrb r2, [r1, #2]
	cmp r0, r2
	beq _08114948
	add r2, r1, #0
	add r1, r0, #0
_0811493A:
	sub r4, r4, #1
	cmp r4, #0
	blt _0811494C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r1, r0
	bne _0811493A
_08114948:
	cmp r4, #0
	bge _08114958
_0811494C:
	bl sub_08115ED0
	b _081149E0
	.byte 0x00
	.byte 0x00
_08114954:
	.4byte gUnknown_0817E9DC
_08114958:
	ldr r1, _0811497C  @ =0x000009AD
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _081149A0
	cmp r4, #2
	bne _08114984
	ldr r2, _08114980  @ =0x000009C6
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08114984
	mov r0, #2
	bl sub_08115F04
	b _081149E0
_0811497C:
	.4byte 0x000009AD
_08114980:
	.4byte 0x000009C6
_08114984:
	ldr r0, _081149A8  @ =0x00001752
	add r5, r3, r0
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	ldr r2, _081149AC  @ =0x0000FFFF
	add r1, r2, #0
	and r0, r0, r1
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _081149B0
_081149A0:
	add r0, r4, #0
	bl sub_08115F04
	b _081149E0
_081149A8:
	.4byte 0x00001752
_081149AC:
	.4byte 0x0000FFFF
_081149B0:
	bl sub_0809E134
	cmp r0, #0
	beq _081149D8
	ldr r0, _081149D0  @ =gUnknown_0817E9E0
	lsl r1, r4, #1
	add r0, r1, r0
	ldrh r0, [r0]
	strh r0, [r5]
	ldr r0, _081149D4  @ =gUnknown_0817E9E6
	add r1, r1, r0
	ldrh r0, [r1]
	bl sub_080AF4FC
	b _081149DA
	.byte 0x00
	.byte 0x00
_081149D0:
	.4byte gUnknown_0817E9E0
_081149D4:
	.4byte gUnknown_0817E9E6
_081149D8:
	strh r0, [r5]
_081149DA:
	add r0, r4, #0
	bl sub_08115F04
_081149E0:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08114908

	.byte 0x00
	.byte 0x00
