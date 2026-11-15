	THUMB_FUNC_START sub_08027B20
sub_08027B20: @ 0x08027B20
	push {r4,lr}
	add r4, r0, #0
	bl sub_08027C48
	lsl r0, r0, #24
	cmp r0, #0
	bne _08027BC4
	ldrb r0, [r4, #11]
	cmp r0, #2
	beq _08027B3E
	cmp r0, #2
	ble _08027B88
	cmp r0, #3
	beq _08027B60
	b _08027B88
_08027B3E:
	ldr r1, _08027B5C  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r4, #96]
	ldr r0, [r0]
	and r0, r0, r1
	cmp r0, r1
	beq _08027B88
	mov r0, #1
	strb r0, [r4, #20]
	b _08027BC4
	.byte 0x00
	.byte 0x00
_08027B5C:
	.4byte gUnknown_0201F000
_08027B60:
	ldr r1, _08027B80  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r4, #96]
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #118
	ldrh r1, [r1]
	cmp r0, r1
	bne _08027B84
	mov r0, #255
	b _08027B86
_08027B80:
	.4byte gUnknown_0201F000
_08027B84:
	mov r0, #1
_08027B86:
	strb r0, [r4, #24]
_08027B88:
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08027BC4
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #8
	strb r0, [r4, #24]
	add r0, r4, #0
	bl sub_08027C14
	add r2, r4, #0
	add r2, r2, #42
	add r0, r4, #0
	add r0, r0, #120
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r4, #0
	bl 0x08003870
	mov r0, #87
	bl 0x08003DFC
_08027BC4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08027B20

	.byte 0x00
	.byte 0x00
