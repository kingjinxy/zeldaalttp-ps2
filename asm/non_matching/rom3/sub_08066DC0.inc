	THUMB_FUNC_START sub_08066DC0
sub_08066DC0: @ 0x08066DC0
	push {r4,lr}
	bl sub_0800099C
	add r4, r0, #0
	mov r0, #255
	and r4, r4, r0
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066DE8
	ldr r0, _08066DE4  @ =gUnknown_0814C464
	mov r1, #0
	bl sub_0801386C
	b _08066DF0
	.byte 0x00
	.byte 0x00
_08066DE4:
	.4byte gUnknown_0814C464
_08066DE8:
	ldr r0, _08066E08  @ =gUnknown_0814C46B
	mov r1, #0
	bl sub_0801386C
_08066DF0:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066E10
	ldr r0, _08066E0C  @ =gUnknown_0814C472
	mov r1, #0
	bl sub_0801386C
	b _08066E18
	.byte 0x00
	.byte 0x00
_08066E08:
	.4byte gUnknown_0814C46B
_08066E0C:
	.4byte gUnknown_0814C472
_08066E10:
	ldr r0, _08066E28  @ =gUnknown_0814C479
	mov r1, #0
	bl sub_0801386C
_08066E18:
	cmp r4, #84
	bhi _08066E34
	ldr r0, _08066E2C  @ =gUnknown_0814C480
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08066E30  @ =gUnknown_0814C487
	b _08066E42
_08066E28:
	.4byte gUnknown_0814C479
_08066E2C:
	.4byte gUnknown_0814C480
_08066E30:
	.4byte gUnknown_0814C487
_08066E34:
	cmp r4, #169
	bhi _08066E54
	ldr r0, _08066E4C  @ =gUnknown_0814C480
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08066E50  @ =gUnknown_0814C48E
_08066E42:
	mov r1, #0
	bl sub_0801386C
	b _08066E64
	.byte 0x00
	.byte 0x00
_08066E4C:
	.4byte gUnknown_0814C480
_08066E50:
	.4byte gUnknown_0814C48E
_08066E54:
	ldr r0, _08066E7C  @ =gUnknown_0814C487
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08066E80  @ =gUnknown_0814C48E
	mov r1, #0
	bl sub_0801386C
_08066E64:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066E88
	ldr r0, _08066E84  @ =gUnknown_0814C495
	mov r1, #0
	bl sub_0801386C
	b _08066E90
	.byte 0x00
	.byte 0x00
_08066E7C:
	.4byte gUnknown_0814C487
_08066E80:
	.4byte gUnknown_0814C48E
_08066E84:
	.4byte gUnknown_0814C495
_08066E88:
	ldr r0, _08066E98  @ =gUnknown_0814C498
	mov r1, #0
	bl sub_0801386C
_08066E90:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066E98:
	.4byte gUnknown_0814C498
	THUMB_FUNC_END sub_08066DC0

