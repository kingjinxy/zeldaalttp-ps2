	THUMB_FUNC_START sub_08132D04
sub_08132D04: @ 0x08132D04
	push {r4-r6,lr}
	ldr r0, _08132D7C  @ =gRam
	ldr r1, _08132D80  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08132D6A
	mov r3, #32
	mov r4, #248
	lsl r4, r4, #7
	ldr r2, _08132D84  @ =gUnknown_02000C40
	mov r0, #128
	lsl r0, r0, #3
	add r6, r0, #0
	mov r5, #128
	lsl r5, r5, #2
_08132D28:
	ldrh r1, [r2]
	add r0, r1, #0
	and r0, r0, r4
	cmp r0, r4
	beq _08132D38
	add r0, r1, r6
	lsl r0, r0, #16
	lsr r1, r0, #16
_08132D38:
	strh r1, [r2]
	add r2, r2, #2
	add r3, r3, #1
	cmp r3, #128
	bne _08132D48
	ldr r2, _08132D88  @ =gUnknown_02000E00
	mov r3, #128
	lsl r3, r3, #1
_08132D48:
	cmp r3, r5
	bne _08132D28
	ldr r2, _08132D7C  @ =gRam
	ldr r1, _08132D8C  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08132D66
	ldr r0, _08132D90  @ =0x00000D02
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08132D66:
	bl sub_08132CC4
_08132D6A:
	ldr r1, _08132D7C  @ =gRam
	ldr r0, _08132D94  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_08132D7C:
	.4byte gRam
_08132D80:
	.4byte 0x00000996
_08132D84:
	.4byte gUnknown_02000C40
_08132D88:
	.4byte gUnknown_02000E00
_08132D8C:
	.4byte 0x00000CF8
_08132D90:
	.4byte 0x00000D02
_08132D94:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132D04

