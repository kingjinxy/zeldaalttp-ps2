	THUMB_FUNC_START sub_08030214
sub_08030214: @ 0x08030214
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08030248  @ =0x06014000
	ldr r3, _0803024C  @ =gUnknown_08427910
	lsl r1, r4, #3
	add r1, r1, r3
	ldr r1, [r1]
	lsl r2, r4, #1
	add r2, r2, #1
	lsl r2, r2, #2
	add r2, r2, r3
	ldrh r2, [r2]
	bl 0x080009F4
	ldr r0, _08030250  @ =0x80020000
	bl play_sound
	cmp r4, #4
	bhi _0803030A
	lsl r0, r4, #2
	ldr r1, _08030254  @ =0x08030258
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_08030248:
	.4byte 0x06014000
_0803024C:
	.4byte gUnknown_08427910
_08030250:
	.4byte 0x80020000
_08030254:
	.4byte 0x08030258
	.4byte _0803026C
	.4byte _0803028A
	.4byte _080302B4
	.4byte _080302D2
	.4byte _080302FA
_0803026C:
	mov r0, #70
	mov r1, #8
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #9
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #220
	lsl r0, r0, #1
	bl play_sound
	b _0803030A
_0803028A:
	mov r0, #70
	mov r1, #10
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #14
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #19
	add r2, r4, #0
	bl sub_0804C8A8
	ldr r0, _080302B0  @ =0x000001B5
	bl play_sound
	b _0803030A
_080302B0:
	.4byte 0x000001B5
_080302B4:
	mov r0, #70
	mov r1, #12
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #16
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #218
	lsl r0, r0, #1
	bl play_sound
	b _0803030A
_080302D2:
	mov r0, #70
	mov r1, #13
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #15
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #18
	add r2, r4, #0
	bl sub_0804C8A8
	mov r0, #219
	lsl r0, r0, #1
	bl play_sound
	b _0803030A
_080302FA:
	mov r0, #70
	mov r1, #17
	add r2, r4, #0
	bl sub_0804C8A8
	ldr r0, _08030310  @ =0x000001B7
	bl play_sound
_0803030A:
	pop {r4}
	pop {r0}
	bx r0
_08030310:
	.4byte 0x000001B7
	THUMB_FUNC_END sub_08030214

