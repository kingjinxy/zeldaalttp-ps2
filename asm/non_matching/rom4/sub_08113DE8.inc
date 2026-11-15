	THUMB_FUNC_START sub_08113DE8
sub_08113DE8: @ 0x08113DE8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2CB4
	ldr r5, _08113E88  @ =gRam
	ldr r0, _08113E8C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _08113E90  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C79F8
	ldr r1, _08113E94  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113E50
	ldr r2, _08113E98  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #108
	bl sub_080CF0AC
_08113E50:
	ldr r0, _08113E9C  @ =0x00000F92
	add r2, r5, r0
	add r2, r6, r2
	ldr r1, _08113EA0  @ =0x00000996
	add r3, r5, r1
	ldrb r0, [r3]
	add r0, r6, r0
	lsr r0, r0, #2
	mov r1, #1
	eor r0, r0, r1
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r3]
	add r0, r6, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08113E7E
	add r0, r6, #0
	mov r1, #26
	bl sub_080CF0AC
_08113E7E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08113E88:
	.4byte gRam
_08113E8C:
	.4byte 0x00000F12
_08113E90:
	.4byte 0x00000F22
_08113E94:
	.4byte 0x00000FC2
_08113E98:
	.4byte 0x00000F52
_08113E9C:
	.4byte 0x00000F92
_08113EA0:
	.4byte 0x00000996
	THUMB_FUNC_END sub_08113DE8

