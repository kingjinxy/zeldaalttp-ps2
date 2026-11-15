	THUMB_FUNC_START sub_08098B9C
sub_08098B9C: @ 0x08098B9C
	push {r4,r5,lr}
	mov r0, #0
	bl sub_0809EEB4
	ldr r0, _08098BC4  @ =gRam
	ldr r1, _08098BC8  @ =0x000016D4
	add r2, r0, r1
	mov r1, #0
	strb r1, [r2]
	ldr r2, _08098BCC  @ =0x00001663
	add r0, r0, r2
	ldrb r0, [r0]
	sub r0, r0, #7
	cmp r0, #6
	bhi _08098C9A
	lsl r0, r0, #2
	ldr r1, _08098BD0  @ =0x08098BD4
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08098BC4:
	.4byte gRam
_08098BC8:
	.4byte 0x000016D4
_08098BCC:
	.4byte 0x00001663
_08098BD0:
	.4byte 0x08098BD4
	.4byte _08098C84
	.4byte _08098C64
	.4byte _08098C50
	.4byte _08098C50
	.4byte _08098C9A
	.4byte _08098BF0
	.4byte _08098C14
_08098BF0:
	ldr r3, _08098C08  @ =gRam
	ldr r0, _08098C0C  @ =0x0000166A
	add r2, r3, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08098C9A
	mov r1, #0
	strb r1, [r2]
	ldr r2, _08098C10  @ =0x00001663
	add r0, r3, r2
	strb r1, [r0]
	b _08098C9A
_08098C08:
	.4byte gRam
_08098C0C:
	.4byte 0x0000166A
_08098C10:
	.4byte 0x00001663
_08098C14:
	ldr r2, _08098C3C  @ =gRam
	ldr r3, _08098C40  @ =0x00000B5C
	add r1, r2, r3
	mov r3, #0
	mov r0, #254
	strb r0, [r1]
	ldr r1, _08098C44  @ =0x00000B5D
	add r0, r2, r1
	strb r3, [r0]
	ldr r0, _08098C48  @ =0x0000166A
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08098C9A
	strb r3, [r1]
	ldr r1, _08098C4C  @ =0x00001663
	add r0, r2, r1
	strb r3, [r0]
	b _08098C9A
	.byte 0x00
	.byte 0x00
_08098C3C:
	.4byte gRam
_08098C40:
	.4byte 0x00000B5C
_08098C44:
	.4byte 0x00000B5D
_08098C48:
	.4byte 0x0000166A
_08098C4C:
	.4byte 0x00001663
_08098C50:
	ldr r0, _08098C5C  @ =gRam
	ldr r2, _08098C60  @ =0x00001663
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
	b _08098C9A
_08098C5C:
	.4byte gRam
_08098C60:
	.4byte 0x00001663
_08098C64:
	ldr r0, _08098C7C  @ =gRam
	ldr r3, _08098C80  @ =0x00001663
	add r0, r0, r3
	mov r1, #7
	strb r1, [r0]
	bl sub_0812F9A8
	mov r0, #4
	mov r1, #64
	bl sub_08116854
	b _08098C9A
_08098C7C:
	.4byte gRam
_08098C80:
	.4byte 0x00001663
_08098C84:
	ldr r0, _08098CC8  @ =gRam
	ldr r1, _08098CCC  @ =0x00001663
	add r0, r0, r1
	mov r1, #8
	strb r1, [r0]
	bl sub_0812F9A8
	mov r0, #4
	mov r1, #64
	bl sub_08116854
_08098C9A:
	ldr r0, _08098CD0  @ =gMoonPearl
	ldrb r4, [r0]
	cmp r4, #0
	bne _08098CDC
	mov r0, #4
	mov r1, #35
	bl sub_081166E8
	ldr r0, _08098CC8  @ =gRam
	ldr r3, _08098CD4  @ =0x0000176E
	add r2, r0, r3
	add r3, r3, #159
	add r1, r0, r3
	strb r4, [r1]
	sub r3, r3, #253
	add r1, r0, r3
	strb r4, [r1]
	ldr r1, _08098CD8  @ =0x000017F1
	add r0, r0, r1
	strb r4, [r0]
	strb r4, [r2]
	b _08098D0C
	.byte 0x00
	.byte 0x00
_08098CC8:
	.4byte gRam
_08098CCC:
	.4byte 0x00001663
_08098CD0:
	.4byte gMoonPearl
_08098CD4:
	.4byte 0x0000176E
_08098CD8:
	.4byte 0x000017F1
_08098CDC:
	ldr r4, _08098D14  @ =gRam
	ldr r2, _08098D18  @ =0x00001710
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #0
	beq _08098D0C
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #21
	bl sub_0809E43C
	ldr r3, _08098D1C  @ =0x0000176E
	add r2, r4, r3
	mov r1, #0
	add r3, r3, #159
	add r0, r4, r3
	strb r1, [r0]
	strb r1, [r5]
	sub r3, r3, #28
	add r0, r4, r3
	strb r1, [r0]
	strb r1, [r2]
_08098D0C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08098D14:
	.4byte gRam
_08098D18:
	.4byte 0x00001710
_08098D1C:
	.4byte 0x0000176E
	THUMB_FUNC_END sub_08098B9C

