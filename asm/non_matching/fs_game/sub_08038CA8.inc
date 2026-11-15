	THUMB_FUNC_START sub_08038CA8
sub_08038CA8: @ 0x08038CA8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08038CB4:
	add r0, r7, #0
	ldr r1, _08038CC4  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08038CC8
	b _08038D24
	.byte 0x00
	.byte 0x00
_08038CC4:
	.4byte gUnknown_03006C80
_08038CC8:
	ldr r0, _08038D0C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08038D10
	ldr r0, _08038D0C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _08038D14
	b _08038D10
_08038D0C:
	.4byte gUnknown_03006A30
_08038D10:
	mov r0, #0
	b _08038D48
_08038D14:
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038CB4
_08038D24:
	bl sub_080367E4
	add r1, r0, #0
	mov r0, #0
	mov r2, #15
	and r1, r1, r2
	ldr r2, _08038D44  @ =gUnknown_03006C80
	add r3, r2, #0
	add r2, r2, #111
	lsl r3, r1, #24
	lsr r1, r3, #24
	ldrb r2, [r2]
	cmp r1, r2
	bne _08038D42
	mov r0, #1
_08038D42:
	b _08038D48
_08038D44:
	.4byte gUnknown_03006C80
_08038D48:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08038CA8

