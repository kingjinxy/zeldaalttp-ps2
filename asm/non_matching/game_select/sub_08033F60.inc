	THUMB_FUNC_START sub_08033F60
sub_08033F60: @ 0x08033F60
	push {r4-r7,lr}
	add r6, r0, #0
	ldr r0, _08033FF8  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08033FF0
	ldrb r0, [r6, #11]
	cmp r0, #0
	bne _08033F86
	ldrb r0, [r6, #22]
	cmp r0, #0
	bne _08033F86
	mov r0, #1
	strb r0, [r6, #22]
	ldr r0, _08033FFC  @ =0x00000215
	bl play_sound
_08033F86:
	add r0, r6, #0
	bl GetNextFrame
	add r0, r6, #0
	bl sub_0803CC20
	ldr r0, [r6, #84]
	mov r1, #54
	ldrsh r0, [r0, r1]
	add r0, r0, #24
	mov r2, #54
	ldrsh r1, [r6, r2]
	cmp r0, r1
	bne _08033FF0
	mov r5, #0
	ldr r0, _08034000  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcs _08033FE0
	ldr r7, _08034004  @ =gUnknown_03006A58
_08033FAE:
	mov r0, #88
	mov r1, #9
	mov r2, #1
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08033FD2
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D3D0
	lsl r0, r5, #3
	add r0, r0, r5
	lsl r0, r0, #4
	add r0, r0, r7
	ldr r0, [r0]
	str r0, [r4, #88]
_08033FD2:
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	ldr r0, _08034000  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcc _08033FAE
_08033FE0:
	mov r0, #2
	strb r0, [r6, #20]
	mov r0, #90
	strb r0, [r6, #23]
	ldrb r1, [r6, #28]
	sub r0, r0, #94
	and r0, r0, r1
	strb r0, [r6, #28]
_08033FF0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033FF8:
	.4byte gUnknown_0201F000
_08033FFC:
	.4byte 0x00000215
_08034000:
	.4byte gUnknown_03006C80
_08034004:
	.4byte gUnknown_03006A58
	THUMB_FUNC_END sub_08033F60

