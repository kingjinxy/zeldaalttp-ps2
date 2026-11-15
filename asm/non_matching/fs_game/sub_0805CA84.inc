	THUMB_FUNC_START sub_0805CA84
sub_0805CA84: @ 0x0805CA84
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0805C878
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805CAC8
	cmp r0, #1
	bgt _0805CAA4
	cmp r0, #0
	beq _0805CAAE
	b _0805CB14
_0805CAA4:
	cmp r0, #2
	beq _0805CAEE
	cmp r0, #3
	beq _0805CAAE
	b _0805CB14
_0805CAAE:
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	strh r1, [r0]
	add r0, r7, #6
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	ldrh r1, [r2]
	strh r1, [r0]
	b _0805CB14
_0805CAC8:
	add r0, r7, #4
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #120
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #124
	ldrh r1, [r1]
	ldrh r2, [r3]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #6
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	ldrh r1, [r2]
	strh r1, [r0]
	b _0805CB14
_0805CAEE:
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	strh r1, [r0]
	add r0, r7, #6
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #122
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #126
	ldrh r1, [r1]
	ldrh r2, [r3]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805CB14
_0805CB14:
	ldr r0, _0805CDA0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	add r0, r1, #0
	bl 0x08003FE8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805CBA0
	ldr r0, _0805CDA0  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #80
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805CBA0
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	ldr r2, [r1, #40]
	add r1, r7, #4
	ldrh r2, [r2, #50]
	ldrh r1, [r1]
	sub r2, r2, r1
	ldrh r0, [r0]
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CBA0
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	ldr r2, [r1, #40]
	add r1, r7, #6
	ldrh r2, [r2, #54]
	ldrh r1, [r1]
	sub r2, r2, r1
	ldrh r0, [r0]
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CBA0
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	ldr r0, [r1, #40]
	ldr r2, [r7]
	ldr r1, [r2, #12]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	bl 0x08002E70
_0805CBA0:
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r2, [r1]
	add r0, r2, #0
	bl 0x08003FE8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805CC3A
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #80
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805CC3A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	add r2, r2, #184
	ldr r1, [r2]
	add r2, r7, #4
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CC3A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	add r2, r2, #184
	ldr r1, [r2]
	add r2, r7, #6
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CC3A
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	ldr r2, [r7]
	ldr r1, [r2, #12]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	bl 0x08002E70
_0805CC3A:
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	add r0, r2, #0
	bl 0x08003FE8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805CCE8
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #80
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805CCE8
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #164
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	add r2, r7, #4
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CCE8
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #164
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	add r2, r7, #6
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CCE8
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	ldr r2, [r7]
	ldr r1, [r2, #12]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	bl 0x08002E70
_0805CCE8:
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	add r0, r2, #0
	bl 0x08003FE8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805CD96
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #80
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805CD96
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #236
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	add r2, r7, #4
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CD96
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldr r2, _0805CDA0  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #236
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	add r2, r7, #6
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	sub r1, r1, r2
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0805CD96
	ldr r1, _0805CDA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	ldr r2, [r7]
	ldr r1, [r2, #12]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #43
	ldrb r2, [r3]
	bl 0x08002E70
_0805CD96:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805CDA0:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0805CA84

