	THUMB_FUNC_START sub_08072E1C
sub_08072E1C: @ 0x08072E1C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _08072E88  @ =gRam
	ldr r0, _08072E8C  @ =0x000009E8
	add r1, r4, r0
	mov r2, #0
	mov r8, r2
	mov r0, #0
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r7, r4, r0
	ldr r0, _08072E90  @ =0x0000FC43
	strh r0, [r7]
	ldr r1, _08072E94  @ =0x000009C6
	add r5, r4, r1
	ldrh r1, [r5]
	mov r6, #63
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08072E50
	mov r0, #30
	bl sub_0812FBC4
_08072E50:
	mov r2, #171
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _08072E66
	ldr r1, _08072E98  @ =0x000009AC
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #11
	bne _08072EA0
_08072E66:
	ldr r2, _08072E9C  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #36
	bne _08072EEA
	bl sub_080783D8
	ldrh r1, [r5]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08072EEA
	mov r0, #30
	bl sub_0812FBC4
	b _08072EEA
	.byte 0x00
	.byte 0x00
_08072E88:
	.4byte gRam
_08072E8C:
	.4byte 0x000009E8
_08072E90:
	.4byte 0x0000FC43
_08072E94:
	.4byte 0x000009C6
_08072E98:
	.4byte 0x000009AC
_08072E9C:
	.4byte 0x000009AD
_08072EA0:
	ldrh r1, [r5]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08072EC8
	ldr r0, _08072EBC  @ =0x0000FC40
	strh r0, [r7]
	ldr r2, _08072EC0  @ =0x0000051E
	add r1, r4, r2
	ldr r0, _08072EC4  @ =0x00003648
	strh r0, [r1]
	bl sub_08072D8C
	b _08072EEA
_08072EBC:
	.4byte 0x0000FC40
_08072EC0:
	.4byte 0x0000051E
_08072EC4:
	.4byte 0x00003648
_08072EC8:
	lsl r0, r1, #16
	lsr r0, r0, #16
	cmp r0, #45
	bne _08072EEA
	ldr r0, _08072F00  @ =0x0000FC40
	strh r0, [r7]
	ldr r0, _08072F04  @ =0x0000051E
	add r1, r4, r0
	ldr r0, _08072F08  @ =0x00003648
	strh r0, [r1]
	ldr r1, _08072F0C  @ =0x00000998
	add r0, r4, r1
	mov r1, #8
	strb r1, [r0]
	ldr r2, _08072F10  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
_08072EEA:
	ldr r1, _08072F14  @ =gRam
	ldr r0, _08072F18  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08072F00:
	.4byte 0x0000FC40
_08072F04:
	.4byte 0x0000051E
_08072F08:
	.4byte 0x00003648
_08072F0C:
	.4byte 0x00000998
_08072F10:
	.4byte 0x00000999
_08072F14:
	.4byte gRam
_08072F18:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08072E1C

