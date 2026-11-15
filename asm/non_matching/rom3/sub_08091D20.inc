	THUMB_FUNC_START sub_08091D20
sub_08091D20: @ 0x08091D20
	push {r4,lr}
	ldr r0, _08091DB8  @ =0x0000386C
	ldr r1, _08091DBC  @ =0x00000D3E
	bl sub_0808F468
	ldr r0, _08091DC0  @ =0x00003870
	mov r1, #212
	lsl r1, r1, #4
	bl sub_0808F468
	ldr r0, _08091DC4  @ =0x00003874
	ldr r1, _08091DC8  @ =0x00000DBE
	bl sub_0808F468
	ldr r0, _08091DCC  @ =0x00003878
	mov r1, #220
	lsl r1, r1, #4
	bl sub_0808F468
	ldr r2, _08091DD0  @ =0x00001E3C
	ldr r0, _08091DD4  @ =gUnknown_02018000
	add r3, r2, r0
	ldr r1, _08091DD8  @ =gUnknown_08155B4E
	ldr r4, _08091DDC  @ =0x000070F8
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE0  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE4  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE8  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08091DEC  @ =0x000070FE
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	mov r2, #216
	lsl r2, r2, #6
	ldr r4, _08091DD4  @ =gUnknown_02018000
	add r3, r2, r4
	mov r4, #226
	lsl r4, r4, #7
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE0  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE4  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08091DE8  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08091DF0  @ =0x00007106
	add r1, r1, r3
	ldrh r0, [r1]
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08091DB8:
	.4byte 0x0000386C
_08091DBC:
	.4byte 0x00000D3E
_08091DC0:
	.4byte 0x00003870
_08091DC4:
	.4byte 0x00003874
_08091DC8:
	.4byte 0x00000DBE
_08091DCC:
	.4byte 0x00003878
_08091DD0:
	.4byte 0x00001E3C
_08091DD4:
	.4byte gUnknown_02018000
_08091DD8:
	.4byte gUnknown_08155B4E
_08091DDC:
	.4byte 0x000070F8
_08091DE0:
	.4byte gUnknown_02018002
_08091DE4:
	.4byte gUnknown_02018040
_08091DE8:
	.4byte gUnknown_02018042
_08091DEC:
	.4byte 0x000070FE
_08091DF0:
	.4byte 0x00007106
	THUMB_FUNC_END sub_08091D20

