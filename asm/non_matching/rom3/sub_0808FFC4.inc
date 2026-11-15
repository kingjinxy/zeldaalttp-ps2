	THUMB_FUNC_START sub_0808FFC4
sub_0808FFC4: @ 0x0808FFC4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080903B8  @ =0x00000B98
	ldr r0, _080903BC  @ =gUnknown_02018000
	add r2, r1, r0
	ldr r3, _080903C0  @ =gUnknown_08155B4E
	ldr r4, _080903C4  @ =0x00006EF8
	add r0, r3, r4
	ldrh r6, [r0]
	strh r6, [r2]
	ldr r5, _080903C8  @ =gUnknown_02018002
	add r2, r1, r5
	ldr r7, _080903CC  @ =0x00006EFA
	add r0, r3, r7
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r0, _080903D0  @ =gUnknown_02018040
	add r2, r1, r0
	add r4, r4, #4
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	ldr r7, _080903D4  @ =gUnknown_02018042
	add r1, r1, r7
	ldr r2, _080903D8  @ =0x00006EFE
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _080903DC  @ =0x00000C08
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #200
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080903E0  @ =0x0000053C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #199
	lsl r1, r1, #3
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080903E4  @ =0x00000F28
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080903C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080903E8  @ =0x00000B9C
	ldr r4, _080903BC  @ =gUnknown_02018000
	add r2, r1, r4
	mov r5, #222
	lsl r5, r5, #7
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080903EC  @ =0x00006F02
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080903F0  @ =0x00006F06
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _080903F4  @ =0x00000C84
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080903C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #186
	lsl r1, r1, #4
	ldr r4, _080903BC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080903F8  @ =0x00006F08
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080903FC  @ =0x00006F0A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090400  @ =0x00006F0E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #195
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090404  @ =0x00000CB4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090408  @ =0x00000D94
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809040C  @ =0x00000F34
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080903C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090410  @ =0x00000C0C
	ldr r4, _080903BC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090414  @ =0x00006F10
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090418  @ =0x00006F12
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _0809041C  @ =0x00006F16
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #193
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090420  @ =0x00000C14
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090424  @ =0x00000C24
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090428  @ =0x00000C28
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809042C  @ =0x00000C2C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080903C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090430  @ =0x00000C18
	ldr r4, _080903BC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090434  @ =0x00006F18
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090438  @ =0x00006F1A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _0809043C  @ =0x00006F1E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r7, _08090440  @ =0x00000644
	mov r10, r7
	mov r0, r10
	lsl r1, r0, #1
	ldr r7, _080903BC  @ =gUnknown_02018000
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #208
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090444  @ =0x0000063C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080903C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r0, _08090448  @ =0x00000C1C
	ldr r2, _080903BC  @ =gUnknown_02018000
	add r1, r0, r2
	ldr r4, _0809044C  @ =gUnknown_0815CA6E
	ldrh r6, [r4]
	strh r6, [r1]
	ldr r5, _080903C8  @ =gUnknown_02018002
	add r1, r0, r5
	ldr r7, _08090450  @ =0x00006F22
	add r7, r7, r3
	mov r12, r7
	ldrh r5, [r7]
	strh r5, [r1]
	add r2, r2, #64
	add r1, r0, r2
	ldr r4, _08090454  @ =0x00006F24
	add r4, r4, r3
	mov r9, r4
	ldrh r4, [r4]
	strh r4, [r1]
	ldr r7, _080903D4  @ =gUnknown_02018042
	add r0, r0, r7
	ldr r1, _08090458  @ =0x00006F26
	add r1, r1, r3
	mov r8, r1
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r1, _0809045C  @ =0x00000C8C
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #201
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #202
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090460  @ =0x00000CAC
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090464  @ =0x00000D04
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090468  @ =0x00000D08
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809046C  @ =0x00000D0C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080903D4  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #211
	lsl r1, r1, #4
	ldr r2, _080903BC  @ =gUnknown_02018000
	add r0, r1, r2
	strh r6, [r0]
	ldr r4, _080903C8  @ =gUnknown_02018002
	add r0, r1, r4
	strh r5, [r0]
	add r5, r7, #0
	add r2, r1, r5
	b _08090470
_080903B8:
	.4byte 0x00000B98
_080903BC:
	.4byte gUnknown_02018000
_080903C0:
	.4byte gUnknown_08155B4E
_080903C4:
	.4byte 0x00006EF8
_080903C8:
	.4byte gUnknown_02018002
_080903CC:
	.4byte 0x00006EFA
_080903D0:
	.4byte gUnknown_02018040
_080903D4:
	.4byte gUnknown_02018042
_080903D8:
	.4byte 0x00006EFE
_080903DC:
	.4byte 0x00000C08
_080903E0:
	.4byte 0x0000053C
_080903E4:
	.4byte 0x00000F28
_080903E8:
	.4byte 0x00000B9C
_080903EC:
	.4byte 0x00006F02
_080903F0:
	.4byte 0x00006F06
_080903F4:
	.4byte 0x00000C84
_080903F8:
	.4byte 0x00006F08
_080903FC:
	.4byte 0x00006F0A
_08090400:
	.4byte 0x00006F0E
_08090404:
	.4byte 0x00000CB4
_08090408:
	.4byte 0x00000D94
_0809040C:
	.4byte 0x00000F34
_08090410:
	.4byte 0x00000C0C
_08090414:
	.4byte 0x00006F10
_08090418:
	.4byte 0x00006F12
_0809041C:
	.4byte 0x00006F16
_08090420:
	.4byte 0x00000C14
_08090424:
	.4byte 0x00000C24
_08090428:
	.4byte 0x00000C28
_0809042C:
	.4byte 0x00000C2C
_08090430:
	.4byte 0x00000C18
_08090434:
	.4byte 0x00006F18
_08090438:
	.4byte 0x00006F1A
_0809043C:
	.4byte 0x00006F1E
_08090440:
	.4byte 0x00000644
_08090444:
	.4byte 0x0000063C
_08090448:
	.4byte 0x00000C1C
_0809044C:
	.4byte gUnknown_0815CA6E
_08090450:
	.4byte 0x00006F22
_08090454:
	.4byte 0x00006F24
_08090458:
	.4byte 0x00006F26
_0809045C:
	.4byte 0x00000C8C
_08090460:
	.4byte 0x00000CAC
_08090464:
	.4byte 0x00000D04
_08090468:
	.4byte 0x00000D08
_0809046C:
	.4byte 0x00000D0C
_08090470:
	mov r6, r9
	ldrh r0, [r6]
	strh r0, [r2]
	add r7, r7, #2
	add r1, r1, r7
	mov r2, r8
	ldrh r0, [r2]
	strh r0, [r1]
	mov r0, #216
	lsl r0, r0, #4
	sub r4, r4, #2
	add r1, r0, r4
	ldr r5, _08090874  @ =gUnknown_0815CA6E
	ldrh r6, [r5]
	strh r6, [r1]
	sub r7, r7, #64
	add r1, r0, r7
	mov r2, r12
	ldrh r5, [r2]
	strh r5, [r1]
	add r4, r4, #64
	add r1, r0, r4
	mov r7, r9
	ldrh r4, [r7]
	strh r4, [r1]
	ldr r1, _08090878  @ =gUnknown_02018042
	add r0, r0, r1
	mov r7, r8
	ldrh r2, [r7]
	strh r2, [r0]
	ldr r1, _0809087C  @ =0x00000D84
	ldr r7, _08090880  @ =gUnknown_02018000
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090884  @ =0x00000D88
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090888  @ =0x00000D8C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #224
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809088C  @ =0x00000E04
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090890  @ =0x000006BC
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #232
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090894  @ =0x0000073C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #240
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090898  @ =0x0000180C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809089C  @ =0x0000188C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908A0  @ =0x00001890
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908A4  @ =0x0000190C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080908A8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #194
	lsl r1, r1, #4
	ldr r4, _08090880  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080908AC  @ =0x00006F28
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080908B0  @ =0x00006F2A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080908B4  @ =0x00006F2E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #203
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #217
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908B8  @ =0x00000E14
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080908A8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908BC  @ =0x00000C94
	ldr r4, _08090880  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080908C0  @ =0x00006F30
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080908C4  @ =0x00006F32
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080908C8  @ =0x00006F36
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _080908CC  @ =0x00000CA4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #209
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #219
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908D0  @ =0x00001894
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, r10
	lsl r1, r1, #2
	mov r10, r1
	sub r0, r0, #66
	add r0, r0, r10
	strh r6, [r0]
	ldr r0, _080908A8  @ =gUnknown_02018002
	add r0, r0, r10
	strh r5, [r0]
	add r0, r7, #0
	add r0, r0, r10
	strh r4, [r0]
	ldr r4, _08090878  @ =gUnknown_02018042
	add r10, r10, r4
	mov r5, r10
	strh r2, [r5]
	ldr r1, _080908D4  @ =0x00000C98
	ldr r6, _08090880  @ =gUnknown_02018000
	add r2, r1, r6
	ldr r7, _080908D8  @ =0x00006F38
	add r0, r3, r7
	ldrh r6, [r0]
	strh r6, [r2]
	ldr r0, _080908A8  @ =gUnknown_02018002
	add r2, r1, r0
	ldr r4, _080908DC  @ =0x00006F3A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r7, _080908E0  @ =gUnknown_02018040
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080908E4  @ =0x00006F3E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #210
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908E8  @ =0x000007BC
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #248
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908EC  @ =0x0000198C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908F0  @ =0x000019B0
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080908A8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080908F4  @ =0x00000C9C
	ldr r4, _08090880  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080908F8  @ =0x00006F40
	add r6, r3, r5
	ldrh r0, [r6]
	strh r0, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r0, _080908FC  @ =0x00006F42
	add r5, r3, r0
	ldrh r0, [r5]
	strh r0, [r2]
	add r4, r4, #64
	add r2, r1, r4
	ldr r7, _08090900  @ =0x00006F44
	add r4, r3, r7
	ldrh r0, [r4]
	strh r0, [r2]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	add r7, r7, #2
	add r2, r3, r7
	ldrh r0, [r2]
	strh r0, [r1]
	ldr r0, _08090904  @ =0x00000CA8
	ldr r7, _08090880  @ =gUnknown_02018000
	add r1, r0, r7
	ldrh r6, [r6]
	strh r6, [r1]
	add r7, r7, #2
	add r1, r0, r7
	ldrh r5, [r5]
	strh r5, [r1]
	add r7, r7, #62
	add r1, r0, r7
	ldrh r4, [r4]
	strh r4, [r1]
	ldr r1, _08090878  @ =gUnknown_02018042
	add r0, r0, r1
	ldrh r2, [r2]
	strh r2, [r0]
	ldr r1, _08090908  @ =0x00000D2C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090878  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809090C  @ =0x00000F84
	b _08090910
	.byte 0x00
	.byte 0x00
_08090874:
	.4byte gUnknown_0815CA6E
_08090878:
	.4byte gUnknown_02018042
_0809087C:
	.4byte 0x00000D84
_08090880:
	.4byte gUnknown_02018000
_08090884:
	.4byte 0x00000D88
_08090888:
	.4byte 0x00000D8C
_0809088C:
	.4byte 0x00000E04
_08090890:
	.4byte 0x000006BC
_08090894:
	.4byte 0x0000073C
_08090898:
	.4byte 0x0000180C
_0809089C:
	.4byte 0x0000188C
_080908A0:
	.4byte 0x00001890
_080908A4:
	.4byte 0x0000190C
_080908A8:
	.4byte gUnknown_02018002
_080908AC:
	.4byte 0x00006F28
_080908B0:
	.4byte 0x00006F2A
_080908B4:
	.4byte 0x00006F2E
_080908B8:
	.4byte 0x00000E14
_080908BC:
	.4byte 0x00000C94
_080908C0:
	.4byte 0x00006F30
_080908C4:
	.4byte 0x00006F32
_080908C8:
	.4byte 0x00006F36
_080908CC:
	.4byte 0x00000CA4
_080908D0:
	.4byte 0x00001894
_080908D4:
	.4byte 0x00000C98
_080908D8:
	.4byte 0x00006F38
_080908DC:
	.4byte 0x00006F3A
_080908E0:
	.4byte gUnknown_02018040
_080908E4:
	.4byte 0x00006F3E
_080908E8:
	.4byte 0x000007BC
_080908EC:
	.4byte 0x0000198C
_080908F0:
	.4byte 0x000019B0
_080908F4:
	.4byte 0x00000C9C
_080908F8:
	.4byte 0x00006F40
_080908FC:
	.4byte 0x00006F42
_08090900:
	.4byte 0x00006F44
_08090904:
	.4byte 0x00000CA8
_08090908:
	.4byte 0x00000D2C
_0809090C:
	.4byte 0x00000F84
_08090910:
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D10  @ =0x00001808
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08090D14  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D18  @ =0x00000D1C
	ldr r4, _08090D1C  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090D20  @ =0x00006F48
	add r4, r3, r5
	ldrh r0, [r4]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _08090D24  @ =0x00006F4A
	add r6, r6, r3
	mov r8, r6
	ldrh r0, [r6]
	strh r0, [r2]
	add r2, r1, r7
	add r5, r5, #4
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090D28  @ =0x00006F4E
	add r0, r3, r2
	ldrh r5, [r0]
	strh r5, [r1]
	ldr r1, _08090D2C  @ =0x00000D28
	sub r7, r7, #66
	add r0, r1, r7
	ldrh r4, [r4]
	strh r4, [r0]
	ldr r2, _08090D14  @ =gUnknown_02018002
	add r0, r1, r2
	mov r7, r8
	ldrh r2, [r7]
	strh r2, [r0]
	ldr r7, _08090D30  @ =gUnknown_02018040
	add r0, r1, r7
	strh r6, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r5, [r1]
	mov r1, #247
	lsl r1, r1, #3
	sub r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r2, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r6, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r5, [r1]
	ldr r1, _08090D34  @ =0x00001804
	sub r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r2, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r6, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r5, [r1]
	ldr r1, _08090D38  @ =0x00001928
	sub r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r2, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r6, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r5, [r1]
	ldr r1, _08090D3C  @ =0x000019AC
	sub r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r4, _08090D14  @ =gUnknown_02018002
	add r0, r1, r4
	strh r2, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r5, [r1]
	ldr r1, _08090D40  @ =0x00000D34
	sub r4, r4, #2
	add r2, r1, r4
	ldr r5, _08090D44  @ =0x00006F50
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090D48  @ =0x00006F52
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090D4C  @ =0x00006F56
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #227
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #235
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D50  @ =0x00001934
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08090D14  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D54  @ =0x000005BC
	ldr r4, _08090D1C  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090D58  @ =0x00006F58
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090D5C  @ =0x00006F5A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090D60  @ =0x00006F5E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08090D64  @ =0x00000DAC
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D68  @ =0x00000E2C
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #215
	lsl r1, r1, #3
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D6C  @ =0x00000EAC
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #231
	lsl r1, r1, #3
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D70  @ =0x00001888
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D74  @ =0x00001908
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08090D14  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D78  @ =0x00000E08
	ldr r4, _08090D1C  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090D7C  @ =0x00006F60
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090D80  @ =0x00006F62
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090D84  @ =0x00006F66
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08090D88  @ =0x00000E84
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08090D14  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090D8C  @ =0x00000E0C
	ldr r4, _08090D1C  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08090D90  @ =0x00006F68
	add r0, r3, r5
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _08090D94  @ =0x00006F6A
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r7
	ldr r4, _08090D98  @ =0x00006F6C
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #225
	lsl r1, r1, #4
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08090D9C  @ =0x00000E88
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r6, [r0]
	strh r6, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	ldr r7, _08090DA0  @ =0x00006F7A
	add r0, r3, r7
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r0, _08090D30  @ =gUnknown_02018040
	add r2, r1, r0
	add r4, r4, #4
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	ldr r7, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r7
	ldr r2, _08090DA4  @ =0x00006F7E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08090DA8  @ =0x00000FAC
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08090D14  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090DAC  @ =0x00000E8C
	ldr r4, _08090D1C  @ =gUnknown_02018000
	add r2, r1, r4
	mov r5, #223
	lsl r5, r5, #7
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _08090DB0  @ =0x00006F82
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _08090DB4  @ =0x00006F86
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08090DB8  @ =0x00000F0C
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #241
	lsl r1, r1, #4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090DBC  @ =0x00000F14
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090DC0  @ =0x00000F94
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08090D0C  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08090DC4  @ =0x0000182C
	sub r7, r7, #64
	add r0, r1, r7
	b _08090DC8
_08090D0C:
	.4byte gUnknown_02018042
_08090D10:
	.4byte 0x00001808
_08090D14:
	.4byte gUnknown_02018002
_08090D18:
	.4byte 0x00000D1C
_08090D1C:
	.4byte gUnknown_02018000
_08090D20:
	.4byte 0x00006F48
_08090D24:
	.4byte 0x00006F4A
_08090D28:
	.4byte 0x00006F4E
_08090D2C:
	.4byte 0x00000D28
_08090D30:
	.4byte gUnknown_02018040
_08090D34:
	.4byte 0x00001804
_08090D38:
	.4byte 0x00001928
_08090D3C:
	.4byte 0x000019AC
_08090D40:
	.4byte 0x00000D34
_08090D44:
	.4byte 0x00006F50
_08090D48:
	.4byte 0x00006F52
_08090D4C:
	.4byte 0x00006F56
_08090D50:
	.4byte 0x00001934
_08090D54:
	.4byte 0x000005BC
_08090D58:
	.4byte 0x00006F58
_08090D5C:
	.4byte 0x00006F5A
_08090D60:
	.4byte 0x00006F5E
_08090D64:
	.4byte 0x00000DAC
_08090D68:
	.4byte 0x00000E2C
_08090D6C:
	.4byte 0x00000EAC
_08090D70:
	.4byte 0x00001888
_08090D74:
	.4byte 0x00001908
_08090D78:
	.4byte 0x00000E08
_08090D7C:
	.4byte 0x00006F60
_08090D80:
	.4byte 0x00006F62
_08090D84:
	.4byte 0x00006F66
_08090D88:
	.4byte 0x00000E84
_08090D8C:
	.4byte 0x00000E0C
_08090D90:
	.4byte 0x00006F68
_08090D94:
	.4byte 0x00006F6A
_08090D98:
	.4byte 0x00006F6C
_08090D9C:
	.4byte 0x00000E88
_08090DA0:
	.4byte 0x00006F7A
_08090DA4:
	.4byte 0x00006F7E
_08090DA8:
	.4byte 0x00000FAC
_08090DAC:
	.4byte 0x00000E8C
_08090DB0:
	.4byte 0x00006F82
_08090DB4:
	.4byte 0x00006F86
_08090DB8:
	.4byte 0x00000F0C
_08090DBC:
	.4byte 0x00000F14
_08090DC0:
	.4byte 0x00000F94
_08090DC4:
	.4byte 0x0000182C
_08090DC8:
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080911C4  @ =0x00001830
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080911C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	mov r1, #233
	lsl r1, r1, #4
	ldr r4, _080911CC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080911D0  @ =0x00006F88
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080911D4  @ =0x00006F8A
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080911D8  @ =0x00006F8E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	mov r1, #251
	lsl r1, r1, #4
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080911C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080911DC  @ =0x00000E94
	ldr r4, _080911CC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080911E0  @ =0x00006F90
	add r0, r3, r5
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _080911E4  @ =0x00006F92
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r7
	ldr r4, _080911E8  @ =0x00006F94
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _080911C0  @ =gUnknown_02018042
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _080911EC  @ =0x00000F04
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r6, [r0]
	strh r6, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	ldr r7, _080911F0  @ =0x00006F9A
	add r0, r3, r7
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r0, _080911F4  @ =gUnknown_02018040
	add r2, r1, r0
	add r4, r4, #4
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	ldr r7, _080911C0  @ =gUnknown_02018042
	add r1, r1, r7
	ldr r2, _080911F8  @ =0x00006F9E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _080911FC  @ =0x00000F88
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08091200  @ =0x00001810
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080911C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08091204  @ =0x00000F08
	ldr r4, _080911CC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08091208  @ =0x00006FA0
	add r0, r3, r5
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _0809120C  @ =0x00006FA2
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r7
	ldr r4, _08091210  @ =0x00006FA4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _080911C0  @ =gUnknown_02018042
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091214  @ =0x00000F8C
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #249
	lsl r1, r1, #4
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r6, [r0]
	strh r6, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	ldr r7, _08091218  @ =0x00006FB2
	add r0, r3, r7
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r0, _080911F4  @ =gUnknown_02018040
	add r2, r1, r0
	add r4, r4, #4
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	ldr r7, _080911C0  @ =gUnknown_02018042
	add r1, r1, r7
	ldr r2, _0809121C  @ =0x00006FB6
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08091220  @ =0x000018AC
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _080911C8  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _080911C0  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08091224  @ =0x00000FA8
	ldr r4, _080911CC  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _08091228  @ =0x00006FB8
	add r0, r3, r5
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _0809122C  @ =0x00006FBA
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r7
	ldr r4, _08091230  @ =0x00006FBC
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _080911C0  @ =gUnknown_02018042
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091234  @ =0x00000FB4
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091238  @ =0x00001814
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _0809123C  @ =0x00001828
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091240  @ =0x00001834
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091244  @ =0x000018A8
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091248  @ =0x000018B0
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _0809124C  @ =0x000018B4
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091250  @ =0x0000192C
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091254  @ =0x00001930
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08091258  @ =0x00000D14
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r6, [r0]
	strh r6, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	ldr r7, _0809125C  @ =0x0000700A
	add r0, r3, r7
	ldrh r5, [r0]
	strh r5, [r2]
	ldr r0, _080911F4  @ =gUnknown_02018040
	add r2, r1, r0
	add r4, r4, #4
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	ldr r7, _080911C0  @ =gUnknown_02018042
	add r1, r1, r7
	ldr r2, _08091260  @ =0x0000700E
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08091264  @ =0x00000D24
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	b _08091268
_080911C0:
	.4byte gUnknown_02018042
_080911C4:
	.4byte 0x00001830
_080911C8:
	.4byte gUnknown_02018002
_080911CC:
	.4byte gUnknown_02018000
_080911D0:
	.4byte 0x00006F88
_080911D4:
	.4byte 0x00006F8A
_080911D8:
	.4byte 0x00006F8E
_080911DC:
	.4byte 0x00000E94
_080911E0:
	.4byte 0x00006F90
_080911E4:
	.4byte 0x00006F92
_080911E8:
	.4byte 0x00006F94
_080911EC:
	.4byte 0x00000F04
_080911F0:
	.4byte 0x00006F9A
_080911F4:
	.4byte gUnknown_02018040
_080911F8:
	.4byte 0x00006F9E
_080911FC:
	.4byte 0x00000F88
_08091200:
	.4byte 0x00001810
_08091204:
	.4byte 0x00000F08
_08091208:
	.4byte 0x00006FA0
_0809120C:
	.4byte 0x00006FA2
_08091210:
	.4byte 0x00006FA4
_08091214:
	.4byte 0x00000F8C
_08091218:
	.4byte 0x00006FB2
_0809121C:
	.4byte 0x00006FB6
_08091220:
	.4byte 0x000018AC
_08091224:
	.4byte 0x00000FA8
_08091228:
	.4byte 0x00006FB8
_0809122C:
	.4byte 0x00006FBA
_08091230:
	.4byte 0x00006FBC
_08091234:
	.4byte 0x00000FB4
_08091238:
	.4byte 0x00001814
_0809123C:
	.4byte 0x00001828
_08091240:
	.4byte 0x00001834
_08091244:
	.4byte 0x000018A8
_08091248:
	.4byte 0x000018B0
_0809124C:
	.4byte 0x000018B4
_08091250:
	.4byte 0x0000192C
_08091254:
	.4byte 0x00001930
_08091258:
	.4byte 0x00000D14
_0809125C:
	.4byte 0x0000700A
_08091260:
	.4byte 0x0000700E
_08091264:
	.4byte 0x00000D24
_08091268:
	ldr r0, _08091390  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _08091394  @ =0x00001914
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08091398  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08091390  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _0809139C  @ =0x00000DB4
	ldr r4, _080913A0  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080913A4  @ =0x00007010
	add r0, r3, r5
	ldrh r6, [r0]
	strh r6, [r2]
	sub r7, r7, #62
	add r2, r1, r7
	ldr r4, _080913A8  @ =0x00007012
	add r0, r3, r4
	ldrh r5, [r0]
	strh r5, [r2]
	add r7, r7, #62
	add r2, r1, r7
	add r4, r4, #2
	add r0, r3, r4
	ldrh r4, [r0]
	strh r4, [r2]
	add r7, r7, #2
	add r1, r1, r7
	ldr r2, _080913AC  @ =0x00007016
	add r0, r3, r2
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _080913B0  @ =0x00001990
	sub r7, r7, #66
	add r0, r1, r7
	strh r6, [r0]
	add r7, r7, #2
	add r0, r1, r7
	strh r5, [r0]
	add r7, r7, #62
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08091390  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080913B4  @ =0x000019B4
	sub r7, r7, #64
	add r0, r1, r7
	strh r6, [r0]
	ldr r6, _08091398  @ =gUnknown_02018002
	add r0, r1, r6
	strh r5, [r0]
	add r7, r7, #64
	add r0, r1, r7
	strh r4, [r0]
	ldr r0, _08091390  @ =gUnknown_02018042
	add r1, r1, r0
	strh r2, [r1]
	ldr r1, _080913B8  @ =0x00001988
	ldr r4, _080913A0  @ =gUnknown_02018000
	add r2, r1, r4
	ldr r5, _080913BC  @ =0x00007018
	add r0, r3, r5
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r6
	ldr r6, _080913C0  @ =0x0000701A
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r1, r7
	ldr r4, _080913C4  @ =0x0000701C
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _08091390  @ =gUnknown_02018042
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _080913C8  @ =0x00000F2C
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r1]
	mov r1, #243
	lsl r1, r1, #4
	sub r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	sub r5, r5, #64
	add r2, r1, r5
	add r6, r6, #4
	add r0, r3, r6
	ldrh r0, [r0]
	strh r0, [r2]
	add r7, r7, #64
	add r2, r1, r7
	add r4, r4, #4
	add r0, r3, r4
	ldrh r0, [r0]
	strh r0, [r2]
	add r5, r5, #64
	add r1, r1, r5
	add r6, r6, #4
	add r3, r3, r6
	ldrh r0, [r3]
	strh r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08091390:
	.4byte gUnknown_02018042
_08091394:
	.4byte 0x00001914
_08091398:
	.4byte gUnknown_02018002
_0809139C:
	.4byte 0x00000DB4
_080913A0:
	.4byte gUnknown_02018000
_080913A4:
	.4byte 0x00007010
_080913A8:
	.4byte 0x00007012
_080913AC:
	.4byte 0x00007016
_080913B0:
	.4byte 0x00001990
_080913B4:
	.4byte 0x000019B4
_080913B8:
	.4byte 0x00001988
_080913BC:
	.4byte 0x00007018
_080913C0:
	.4byte 0x0000701A
_080913C4:
	.4byte 0x0000701C
_080913C8:
	.4byte 0x00000F2C
	THUMB_FUNC_END sub_0808FFC4

